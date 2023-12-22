#include "msh.h"

int main(void)
{
	/* Check for signals (Ctrl + C) */
	signal(SIGINT, sigint_handler);
}
