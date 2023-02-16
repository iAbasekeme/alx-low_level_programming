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

	printf("size of a char : %ldbyte(s) \n",
		sizeof(char_type));
	printf("size of a integer_type : %ldbyte(s) \n",
		sizeof(integer_type));
	printf("size of a long int : %ld\bbyte(s) \n",
		sizeof(long_Int_Type));
	printf("size of a long long int : %ldbyte(s) \n",
		sizeof(long_Long_Int_Type));
	printf("size of a float : %ldbyte(s) \n",
		sizeof(float_Type));
	return (0);
}
