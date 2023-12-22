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

/* Checks for signal interrupts from keyboard */
void sigint_handler(int signum);

/* Display the shell prompt */
void display_prompt(void);

#endif
