#include "msh.h"

void signal_handler(__attribute__((unused))int signum)
{
	putchar('\n');
	display_prompt();
	fflush(stdout);
}
