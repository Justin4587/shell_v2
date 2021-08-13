#include "shell_v2.h"

/**
* main - It's a shell
* Return: Nothing, it's an empty shell
*/
int main(void)
{
	int status, len;
	size_t size = 1024;
	char *buf = NULL, **av;
	pid_t pid;

	buf = malloc(sizeof(char) * size);
	while (1)
	{

		if (isatty(0))
			printf("Sea-Shell$ ");
		status = getline(&buf, &size, stdin);
		if (status == -1 || _strncmp(buf, "exit", 4) == 0)
			break;
		len = _strlen(buf);
		buf[len - 1] = '\0';
		av = buf_splitter(buf);
		pid = fork();
		if (pid == 0)
		{
			execve(av[0], av, environ);
			exit(0);
		}
		else
			wait(NULL);
		free_grid(&av);
	}
	free(buf);
	return (0);
}
