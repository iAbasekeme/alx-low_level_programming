#include <unistd.h>
#include <fcntl.h>
/**
 * main -A program that prints exactly "and that piece of art is useful\" -
 * Dora Korpar, 2015-10-19\",followed by a new line,to the stderr."
 *
 * Return: (1)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
