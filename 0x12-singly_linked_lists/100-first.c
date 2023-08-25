#include <stdio.h>

void prefunction(void) __attribute__ ((constructor));

/**
 * prefunction - write out a sentence before the main function is executed.
 */
void prefunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
