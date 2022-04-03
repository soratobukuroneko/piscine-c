#include <assert.h>
#include "ft_rev_int_tab.c"

int main(void)
{
	int test[] = {0, 2, 1, 4, 5};
	ft_rev_int_tab(test, 5);
	assert(test[0] == 5 && test[1] == 4 && test[2] == 1 && test[3] == 2 && test[4] == 0);
}
