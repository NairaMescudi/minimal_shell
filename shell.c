#include "shell.h"

int main(void)
{
	char *lineptr = NULL;
	size_t bytes_read, size;
	while (1)
	{
		printf("~$ ");

		bytes_read = getline(&lineptr, &size, stdin);
		if (bytes_read == -1)
		{
			free(lineptr);
			printf("Exited\n");
			exit(EXIT_FAILURE);
		}

		printf("%s", lineptr);
		printf("Size of input buffer is: %ld\n", size);
	}
	return (0);
}

