#include "main.h"

/**
 * main - print _putchar
 * is written by bko
 * Return: 0
 */
int main(void)
{
	char putcharvar[10] = "_putchar";
	
	int i;
	
	for (i = 0; i < 8; i++)
	{
		_putchar(putcharvar[i]);
	}
	_putchar(10);
	return (0);
}
