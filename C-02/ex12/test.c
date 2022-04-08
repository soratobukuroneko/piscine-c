void* ft_print_memory(void*, unsigned int);

void print_address(void*);

int main(void)
{
	char memory0[] = "\xee";
	char memory1[] = "Hello, World! How are y'all?\n\t42 is great! Hehehehe";
	char memory2[] = "\x10\xff\x9f\xabHellow";
	ft_print_memory(memory0, 1);
	ft_print_memory(memory1, sizeof memory1);
	ft_print_memory(memory2, sizeof memory2);
	return 0;
}
