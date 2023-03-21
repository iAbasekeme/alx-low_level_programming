#include <stdio.h>
#include "main.h"

/**
 * main - expand into the current file
 * @__FILE__ - the file to expand into
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n",__FIILE__);
	return (0);
}
