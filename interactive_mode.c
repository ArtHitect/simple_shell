#include <stdio.h>
#include "shell.h"

/**
 * is_delim – check if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, const char *delim)
{
    for (; *delim; ++delim) {
        if (*delim == c) {
            return 1;
        }
    }
    return 0; 
}

/**
 * _isalpha – check for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0;
}
/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
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

    return sign * result;
}
