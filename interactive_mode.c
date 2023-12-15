#include <stdio.h>
#include "shell.h"

/**
 * is_delim - Check if a character is a delimiter.
 *
 * This function checks whether the given character is a delimiter.
 *
 * @param delim The delimiter character to compare against.
 * @c: The character to check.
 * Return: Non-zero if the character is a delimiter, 0 otherwise.
 */
int is_delim(char c, char delim)
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
 * _isalpha - Check if a character is alphabetic.
 *
 * This function checks whether the given character is an alphabetic character.
 *
 * delim - The delimiter character to compare against.
 * @c: The character to check.
 * Return: Non-zero if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _atoi - Convert a string to an integer.
 *
 * This function converts the given string to an integer.
 *
 * delim - The delimiter character to compare against.
 * @str: The string to convert.
 * Return: The converted integer.
 */
int _atoi(const char *str)
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
