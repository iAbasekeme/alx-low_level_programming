#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0)
*/
int main(void)
{
	char char_type;
	int integer_type;
	long int long_Int_Type;
	long long int long_Long_Int_Type;
	float float_Type;

	printf("size of a char: %ld byte(s) \n",
		sizeof(char_type));
	printf("size of an int: %ld byte(s) \n",
		sizeof(integer_type));
	printf("size of a long int: %ld byte(s) \n",
		sizeof(long_Int_Type));
	printf("size of a long long int: %ld byte(s) \n",
		sizeof(long_Long_Int_Type));
	printf("size of a float: %ld byte(s) \n",
		sizeof(float_Type));
	return (0);
}
