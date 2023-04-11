#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * @argc: arguments
 * @argv: array of arguments
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 3)
	{
		printf("%d\n", *(argv + 1) * *(argv + 2));
		return (0);
	}
}
