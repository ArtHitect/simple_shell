#ifndef SHELL_H

#define SHELL_H

int main(void);

/**
 * is_delim - Check if a character is a delimiter.
 *
 * This function checks whether the given character is a delimiter.
 *
 * delim - The delimiter character to compare against.
 * @c: The character to check.
 * Return: Non-zero if the character is a delimiter, 0 otherwise.
 */
int is_delim(char c, char delim);

/**
 * _isalpha - Check if a character is alphabetic.
 *
 * This function checks whether the given character is an alphabetic character.
 *
 * delim - The delimiter character to compare against.
 * @c: The character to check.
 * Return: Non-zero if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c);

/**
 * _atoi - Convert a string to an integer.
 *
 * This function converts the given string to an integer.
 *
 * delim - The delimiter character to compare against.
 * @s: The string to convert.
 * Return: The converted integer.
 */
int _atoi(char *s);
int _mycd(info_t *info)
int _myexit(info_t *info);
int _myhelp(info_t *info);

void handle_chdir_error(info_t *info, const char *directory)
void update_env(info_t *info, const char *env, const char *dir)

interactive_mode();
non_interactive_mode();

#endif /* SHELL_H */
