#include <stdio.h>
#include "ft_swap.c"

int main(void)
{
	int a = 42;
	int b = 24;

	ft_swap(&a, &b);
	if (a == 24 && b == 42) printf("Success");
	else printf("Fail");
}
