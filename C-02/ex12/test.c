void* ft_print_memory(void*, unsigned int);

void print_address(void*);

int main(void)
{
	char memory[] = "Hello, World! How are y'all?\n\t42 is great! Hehehehe";
	ft_print_memory(memory, sizeof memory);
	ft_print_memory(memory, sizeof memory - 1);
	return 0;
}
