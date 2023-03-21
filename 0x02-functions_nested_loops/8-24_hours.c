#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *Return: always 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar('0' + (hours / 10));/*to get the tens*/
			_putchar('0' + (hours % 10));/*to get the ones*/
			_putchar(':');
			_putchar('0' + (minutes / 10));/* the + '0' to get ASCII*/
			_putchar('0' + (minutes % 10));
			_putchar('\n');
			minutes++;
		}
		minutes = 0;
		hours++;
	}
}
