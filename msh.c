#include "msh.h"

int main(void)
{
	char *buffer = NULL, *cwd = NULL;
	size_t bytes_read, size;

	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			
			getcwd(cwd, LARGE_BUF_LENGTH); 
			printf("~$ ");

		}

	}
	return (0);
}

