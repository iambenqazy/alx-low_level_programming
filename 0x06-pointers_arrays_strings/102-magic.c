#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * Inserted line of code
	 */
	p[3] = 98;
	/* ...so that this prints 98 followed by a new line */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
