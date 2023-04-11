#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * @argc: program arguments
 * @argv: array of argc
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
