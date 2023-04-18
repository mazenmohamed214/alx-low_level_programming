/**
 * print_dog - prints dog
 * @d: dog struct
 */
#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)\nAge: (nil)\nOwner: (nil)\n");
	}
	else
	{
		printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
