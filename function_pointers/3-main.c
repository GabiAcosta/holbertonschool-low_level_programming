#include "3-calc.h"
/**
 * main - program that performs simple operations
 *
 * Return: Always 0 (Success)
 */
int main (int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1, num2;
		int (*p)(int, int);

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		
		p = get_op_func(argv[2]);
		if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", p(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
