#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - allocating memory using malloc
* @b: number of bytes to be allocated
*
* Return: pointer to the allocated memory.
* if malloc fails, status value is equal to 98.
*/
void *malloc_checked(unsigned int b)
{
char *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
