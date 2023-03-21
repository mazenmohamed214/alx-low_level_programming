#include "main.h"
/**
 * print alphabet x10 - prints alphabet in lowercase times ten
 */

void print_alphabet_x10(void)
{
	int counter;

	for (counter = 0 ; counter < 9 ; counter++)
	{
		char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
