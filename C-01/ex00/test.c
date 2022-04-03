#include <stdio.h>
#include "ft_ft.c"

int main(void)
{
	int a = 0;
	ft_ft(&a);
	if (a == 42) printf("Success");
	else printf("Fail");
}
