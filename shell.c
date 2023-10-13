#include "shell.h"

/**
 * main - Entry point for the shell program
 *
 * This function serves as the entry point for the shell program. It repeatedly
 * renders the command prompt, gets user input, and executes the specified
 * command.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	char cmd[256];

	while (true)
	{
		render_prompt();
		get_cmd(cmd, sizeof(cmd));
		execute_p(cmd);
	}
}
