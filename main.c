#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * main - Entry point is the start of shell
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	if (isatty(STDIN_FILENO))
	{
		interactive_mode();
	}
	else
	{
		non_interactive_mode();
	}

	return (0);
}
