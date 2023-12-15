#include <stdio.h>
#include "shell.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * handle_chdir_error - Handles the error,
 * when changing the current directory fails.
 *
 * This function prints an error message indicating that changing the
 * current directory to the specified directory has failed.
 *
 * info - info Information about the error.
 * directory - directory The directory causing the error.
 *
 * print_error - info Pointer to the info_t structure.
 * _eputs(directory) - The directory that failed to be changed to.
 */

void handle_chdir_error(info_t *info, const char *directory)
{
	print_error(info, "can't cd to ");
	_eputs(directory);
	_eputchar('\n');
}

/**
 * update_env - Updates environment variables and returns from _mycd.
 *
 * This function updates the "OLDPWD" and "PWD" environment variables
 * and returns from the _mycd function.
 *
 * info - info Information about the update.
 * env - The environment to be updated.
 * dir - The directory to consider during the update.
 *
 * _getenv - info Pointer to the info_t structure.
 * _sentenv - env_variable The environment variable to update.
 * @getcwd - directory The current directory.
 */

void update_env(info_t *info, const char *env, const char *dir)
{
	_setenv(info, env, _getenv(info, "PWD="));
	_setenv(info, "PWD", getcwd(dir, sizeof(dir)));
}

/**
 * _mycd - Changes the current working directory,
 * based on the provided arguments.
 *
 * This function implements the behavior of the 'cd' command in a shell.
 * It changes the current working directory based on the specified arguments.
 *
 * info - Information about the change.
 *
 * @char - info Pointer to the info_t structure.
 * Return: 0 on success, 1 on failure.
 */

int _mycd(info_t *info)
{
	char buffer[1024];
	char *currentDir = getcwd(buffer, sizeof(buffer));

	if (!currentDir)
	{
	_puts("TODO: >>getcwd failure emsg here<<\n");
	return (1);
	}

	char *newDir = (!info->argv[1]) ?
		_getenv(info, "HOME=") :
		((_strcmp(info->argv[1], "-") == 0) ?
		 _getenv(info, "OLDPWD=") : info->argv[1]);

	int chdir_ret = chdir(newDir);

	if (chdir_ret == -1)
	{
	handle_chdir_error(info, newDir);
	return (1);
	}
	else
	{
	update_env_and_return(info, "OLDPWD", newDir);
	}

	return (0);
}
