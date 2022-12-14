#include "main.h"
/**
 * author :sheldon
 *print_alphabet - This program prints the english alphabets a-z
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
