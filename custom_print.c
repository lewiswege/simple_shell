#include "shell.h"

/**
 * shell_print - Print a string to the standard output
 * @string: A pointer to the string to be printed
 *
 * This function is responsible for printing the specified string to the
 * standard output (usually the terminal).
 */

void shell_print(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}
