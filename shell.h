#ifndef SHELL_H

#define SHELL_H

int main(void);

/**
 * is_delim - Checks if character is a delimiter.
 *
 * @c: The character to check.
 * @delim: The delimiter string.
 * 
 * Return: 1 if true, 0 if false.
 */
int is_delim(char c, const char *delim);

/**
 * _isalpha - Checks for alphabetic character.
 * 
 * @c: The character to check.
 * 
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c);

/**
 * _atoi - Converts a string to an integer.
 * 
 * @s: The string to be converted.
 * 
 * Return: 0 if no numbers in string, converted number otherwise.
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
