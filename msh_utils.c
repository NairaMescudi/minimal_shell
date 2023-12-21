#include "msh.h"

//check for memory allocation errors
//check for uninitialization errors
//initialize msh
//check for errors during initialization
//return the msh pointer after init

msh_t *msh_init(msh)
{
	msh_t *msh = NULL;
	
	msh = malloc(sizeof(msh_t));
	if (check_err(msh, 'm') == -1)
	{
		exit(EXIT_FAILURE);
	}

	msh->aliases = malloc(sizeof(alias_t));
	if (check_err(msh->aliases, 'm') == -1)
	{
		exit(EXIT_FAILURE);
	}

	msh->aliases->head = NULL;
	msh->aliases->tail = NULL;
	msh->aliases->size = 0
	msh->exit_code = 0;
	msh->user_input = NULL;

	return (msh);
}

int check_err(void *ptr, const char ptr_type)
{
	/* if the ptr is NULL, implement error checking else return 0 */
	if (ptr == NULL)
	{
		/* check for non initialized shell */
		if (ptr_type == 'l')
		{
			fprintf(stderr, "The shell is not initialized\n");
			return (-1);
		}

		/* check for memory allocation errors */
		if (ptr_type == 'm')
		{
			errno = ENOMEM;
			perror("check_err");
			return (-1);
		}
		/* check for any other types of errors */
		if (ptr_type == 'a')
		{
			fprintf(stderr, "Pointer is NULL, can not proceed\n");
			return (-1);
		}
	}
	return (0);
}
