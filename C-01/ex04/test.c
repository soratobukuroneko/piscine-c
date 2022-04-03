#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include "ft_ultimate_div_mod.c"

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 100; i++)
	{
		int a = rand();
		int b = rand();
		int aa = a;
		int bb = b;
		ft_ultimate_div_mod(&a, &b);
		assert(a == aa / bb && b == aa % bb);

		a *= -1;
		aa = a;
		bb = b;
		ft_ultimate_div_mod(&a, &b);
		assert(a == aa / bb && b == aa % bb);
	}
}
