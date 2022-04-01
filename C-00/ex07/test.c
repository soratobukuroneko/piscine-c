#include <limits.h>
#include "ft_putnbr.c"

int main(void)
{
  const char newline = '\n';

  ft_putnbr(0);
  write(STDOUT_FILENO, &newline, sizeof newline);
  ft_putnbr(42);
  write(STDOUT_FILENO, &newline, sizeof newline);
  ft_putnbr(INT_MIN);
  write(STDOUT_FILENO, &newline, sizeof newline);
  ft_putnbr(INT_MAX);
  return 0;
}
