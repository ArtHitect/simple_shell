#include <stdlib.h>
#include “shell.h”
#include <stdio.h>
#include <unistd.h>

/**
 * _myexit - Exits the shell.
 * @info: Structure containing potential arguments. Used to maintain
 * constant function prototype.
 * Return: exits with a given exit status.
 * (0) if info.argv[0] != "exit"
 */

int _myexit(info_t *info)
{
	if (info->argv[1])
	{

	char *exitArg = info->argv[1];
	int exitValue = atoi(exitArg);

	if (exitValue == 0 && exitArg[0] != '0')
	{

	info->status = 2;
	print_error(info, "Illegal number: ");
	_eputs(exitArg);
	_eputchar('\n');

	return (1);
	}

	info->err_num = exitValue;

	return (-2);
	}

	info->err_num = -1;

	return (-2);
}

/**
 * _myhelp - Changes the current directory of the process.
 * @info: Structure containing potential arguments. Used to maintain
 * constant function prototype.
 * Return: Always 0
 */

int _myhelp(info_t *info)
{
	char **arg_array = info->argv;

	if (arg_array)
	{

	_puts("Usage: your_shell [options]\n");
	_puts("Options:\n");
	_puts("  command1   Description of command1\n");
	_puts("  command2   Description of command2\n");

	}

	else

	{

	_puts("Help for your_shell:\n");
	_puts("Type 'command --help' for detailed help on a specific command.\n");
	_puts("Available commands:\n");
	_puts("  command1\n");
	_puts("  command2\n");

	}

	return (0);
}
