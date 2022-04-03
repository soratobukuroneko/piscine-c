#include <assert.h>
#include "ft_sort_int_tab.c"

int main(void)
{
	int a[] = {3, 2, 4, 1, 0, 8, 7, -2};
	ft_sort_int_tab(a, sizeof a/sizeof *a);
	for (unsigned long i = 0; i < (sizeof a/sizeof *a) - 1; i++)
	{
		assert(a[i] <= a[i + 1]);
	}
	return 0;
}
