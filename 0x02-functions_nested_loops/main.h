/**
 * MAIN_H - include headerfiles
 *
 */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char C);

#endif

/**
 * print_alphabet - print alphabets
 *
 */
void print_alphabet(void)
{
int counter = 'a';

while (counter <= 'z')
{
_putchar(counter);
counter++;
}
_putchar('\n');
}
