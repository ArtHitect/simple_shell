#include <stdio.h>
#include "shell.h"

/**
 * is_delim – Checks if character is a delimeter.
 *
 * @c: The character to check.
 * @delim: The delimeter string.
 *
 * Return: 1 if true, 0 if false.
 */
int is_delim(char c, const char *delim)

{
	for (; *delim; ++delim)
	{
		if (*delim == c)
		{
		return (1);
		}
	}
	return (0);
}

/**
 * _isalpha – Checks for alphabetic character.
 *
 * @c: The character to input.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: 0 if no numbers in string, converted number otherwise.
 */
int _atoi(char *s)

{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i++] == '-') ? -1 : 1;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i++] - '0');
	}

	return (sign * result);
}
