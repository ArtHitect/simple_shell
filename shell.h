#ifndef SHELL_H

#define SHELL_H

int main(void);
int is_delim(char c, const char *delim);
int _isalpha(int c);
int _atoi(char *s);

interactive_mode();
non_interactive_mode();

#endif /* SHELL_H */
