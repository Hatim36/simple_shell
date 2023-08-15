#include <unistd.h>
#include <stdlib.h>

/**
 * main - Pass the betty checks
 * @argc: The number of items in av
 * @argv: A NULL terminated array of strings
 * @envp: A NULL terminated array of strings
 *
 * Return: Always 0 (Success).
 */
int main(int __attribute((unused)) argc, char **argv, char **envp)
{
	argv[0] = "/usr/local/bin/betty";

	if (execve(argv[0], argv, envp) == -1)
	{
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}
