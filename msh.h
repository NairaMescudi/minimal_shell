#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <ctype.h>
#include <errno.h>
#define LARGE_BUF_SIZE 1024
#define SMALL_BUF_SIZE 120

/* Shell custom data type - Linked List */
typedef msh
{
	int exit_code;
	const char *user_input;
	const char *command;
	alias_t *aliases;

	
} msh_t;

/* Alias List custom data type - Linked List */
typedef alias
{
	alias_node *head;
	alias_node *tail;
	size_t size;
} alias_t;

/* Alias Node custom data type - Struct */
typedef aliasNode
{
	const char *name;
	const char *value;
} alias_node;



#endif
