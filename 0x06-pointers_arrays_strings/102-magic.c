#include <stdio.h>

int main(void)
{
	int a[5];
	int *p;

	p = &a[0];
	*(p + 2) = 98;
	printf("%d = %d\n", *(p + 2), *(p + 2));
	return (0);
}
