#include <limits.h>

void ft_putnbr_base(int, char*);

int main(void)
{
	ft_putnbr_base(2, "01");
	ft_putnbr_base(-64, "0123456789");
	ft_putnbr_base(10, "[]{}()''");
	ft_putnbr_base(0, "AB");
	ft_putnbr_base(10, "1");
	ft_putnbr_base(10, "");
	ft_putnbr_base(10, "in-val'd");
	ft_putnbr_base(10, "in+val'd");
	ft_putnbr_base(10, "invalid");
	ft_putnbr_base(INT_MAX, "0123456789abcdef");
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
	return 0;
}
