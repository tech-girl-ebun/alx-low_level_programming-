#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: value
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	return (s);
}
