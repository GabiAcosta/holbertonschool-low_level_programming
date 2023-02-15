#include <stdio.h>
/**
 * main - This is the main function.
 *
 * Return: If returns 0, function works well.
 */
int main(void)
{
char cha;
int in;
long int lon;
long long int lolo;
float floa;
printf("Size of a char: %zu byte(s)\n", sizeof(cha));
printf("Size of an int: %zu byte(s)\n", sizeof(in));
printf("Size of a long int: %zu byte(s)\n", sizeof(lon));
printf("Size of a long long int: %zu byte(s)\n", sizeof(lolo));
printf("Size of a float: %zu byte(s)\n", sizeof(floa));
return (0);
}
