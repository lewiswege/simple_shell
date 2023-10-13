#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>


/**
 * shell_print - Prints a string to the standard output.
 *
 * @string: The string to be printed.
 *
 * This function takes a pointer to a string as a parameter and
 * uses the write function to print the string to the standard output.
 */

void shell_print(const char *string);


/**
 * render_prompt - Renders the command prompt
 *
 * This function is responsible for rendering the command prompt.
 */
void render_prompt(void);

/**
 * execute_p - Executes a command in a child process
 * @cmd: A pointer to a string containing the command to be executed
 *
 * This function creates a child process using fork and executes the specified
 * command, while the parent process waits for completion.
 */
void execute_p(const char *cmd);


/**
 * get_cmd - Retrieve a command from the user
 *
 * @cmd: Pointer to a character array where the command will be stored
 * @size: Size of the character array
 *
 * This function is used to obtain a command from the user and store it in the
 * provided character array 'cmd'. It ensures that the command does not exceed
 * the specified size limit to prevent buffer overflows.
 */
void get_cmd(char *cmd, size_t size);


#endif /*MAIN_H*/
