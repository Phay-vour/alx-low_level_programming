#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 */
void print_alphabet(void)
{
        char d = 'a';

        while (d <= 'z')
        {
                _putchar(d);
                d++;
        }
        _putchar('\n');
}
