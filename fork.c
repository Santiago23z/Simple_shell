#include "shell.h"

/** main - this is main function
 * Return: int
 */
int main(void)
{
	pid_t son;
	int s = WEXITSTATUS(son);
	char *args[2];

	son = fork();
	if (son > 0)
	{
		args[0] = "/bin/sh";
		args[1] = NULL;
		execve(args[0], args, NULL);
	}
	else if (son == 1)
	{
		return (1);
	}
	else
	{
		perror("fork");
		exit(1);
		return (s);
	}
	return (1);
}
