#include "shell.h"

/**
 * execute_p - a function that executes the prompt process
 * @cmd: The command to be executed
 *
 * This function creates a child process using fork and executes the given
 * command using execlp. The parent process waits for the child to complete.
 */


void execute_p(const char *cmd)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(cmd, cmd, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}




#include "shell.h"

/**
 * exec_cmd - Execute a shell command
 * @cmd: The command to execute
 */

void exec_cmd(const char *cmd)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		shell_print("Cannot fork process.\n");
	}
	else if (child_pid == 0)
	{
		char *argv[256];
		int argc = 0;

		char *token = strtok((char *)cmd, " ");

		while (token != NULL)
		{
			argv[argc++] = token;
			token = strtok(NULL, " ");
		}
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("execve failed");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(NULL);
	}
}
