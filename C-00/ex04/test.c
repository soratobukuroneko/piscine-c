#include <stdio.h>
#include "ft_is_negative.c"

int main(void)
{
	for (int n = -1; n < 2; n++)
	{
		printf("%d is :", n);
		printf("\n");
		ft_is_negative(n);
		printf("\n");
	}

	return 0;
}
