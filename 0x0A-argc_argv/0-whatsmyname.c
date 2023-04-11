#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * @argc: value of program arguments
 * @argv: array of the argc
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
