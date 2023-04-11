#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * @argc: arguments
 * @argv: array of arguments
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
