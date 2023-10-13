#include "shell.h"

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


void get_cmd(char *cmd, size_t size)
{
	if (fgets(cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			shell_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			shell_print("Error getting input.\n");
			exit(EXIT_FAILURE);
		}
	}
	cmd[strcspn(cmd, "\n")] = '\0';
}
