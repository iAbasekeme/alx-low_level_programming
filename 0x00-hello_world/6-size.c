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

	printf("size of a char : %ld",\n
		sizeof(char_type));
	printf("size of a integer_type : %ld",
		sizeof(integer_type));
	printf("size of a long int : %ld",
		sizeof(long_Int_Type));
	printf("size of a long long int : %ld",
		sizeof(long_Long_Int_Type));
	printf("size of a float : %ld",
		sizeof(float_Type));
	return (0);
}
