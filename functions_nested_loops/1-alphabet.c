#include main.h

/**
 * prints the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char a;
	fort (a = 'a'; a <= 'z'; a++)
	{
		_putchar (a);
	}
	_putchar ('\n');
}
