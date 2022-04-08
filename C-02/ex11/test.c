void ft_putstr_non_printable(char*);

int main(void)
{
	ft_putstr_non_printable("\xd4Hello\nWorld!\t42\xb8");
	return (0);
}
