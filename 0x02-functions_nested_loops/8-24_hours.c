#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *Return: always 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 23)
	{
		while (minutes < 59)
		{
			_putchar((hours / 10) + '0');/*to get the tens*/
			_putchar((hours % 10) + '0');/*to get the ones and '0'*/
			_putchar(':');
			_putchar((minutes / 10) + '0');/* the + '0' to get ASCII*/
			_putchar((minutes % 10) + '0');
			minutes++;
		}
		minutes = 0;
		hours++;
	}
}
