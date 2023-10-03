#include <stdio.h>
/**
 * main - prints the number of the arguements passed into it.
 * @argc: number of command line arguement.
 * @argv: array that contains the program command line arguement.
 * Return: (0) when successful.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
