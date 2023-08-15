#include "main.h"

/**
 * main - print _putchar
 * is written by bko
 * Return: 0
 */
int main(void) {
	char putchar[10] = "_putchar";
	
	int i;
	
	for (i = 0; i < 8; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar(10);
	return (0);
}
