#include <unistd.h>
#include <stdlib.h>

// memory allocation practice
void	init_arr(int *arr, int size, int value);
void	f_putchar(char ch);

int	main(void)
{
	int arr[100];
	int *ptr;

	if (!(ptr = (int *)malloc(sizeof(int) * 100)))
	{
		write(1, "ERROR\n", 6);
		return (-1);
	}
	init_arr(ptr, 100, 0);
	f_putchar(ptr[0]);
	if (!ptr)
		free(ptr);
	return (0);
}

void	init_arr(int *arr, int size, int value)
{
	int i;

	i = 0;
	while (i < size)
	{
		arr[i] = value;
		i++;
	}
}

void	f_putchar(char ch)
{
	ch += 48;
	write(1, &ch, 1);
}
