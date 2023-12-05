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
		Interactive_mode();
	}
	else
	{
		Non_interactive_mode();
	}
	
	return 0;
}
