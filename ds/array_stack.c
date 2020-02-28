#include <stdio.h>

#define FALSE 0
#define STACK_SIZE 10
int	stack[10];
int	top = -1;

void	push(int *stack, int item, int size);
int	pop(int *stack, int size);
int	peek(int *stack);
int	f_atoi(char *str);

int	main(int argc, char *argv[])
{
	int temp;
	int cnt;

	temp = 0;
	cnt = 1;
	if (argc < 2)
		return (1);
	while (cnt < argc)
	{
		push(stack, f_atoi(argv[cnt]), STACK_SIZE);
		cnt++;
	}
	while (cnt > 0)
	{
		printf("popped element: %d\n", pop(stack, STACK_SIZE));
		cnt--;
	}
	return (0);
}

void	push(int *stack, int item, int size)
{
	if (top >= size - 1)
	{
		printf("STACK IS FULL\n");
		return ;
	}
	stack[++top] = item;
	return ;
}

int	pop(int *stack, int size)
{
	if (top == -1)
	{
		printf("STACK IS EMPTY\n");
		return (-1);
	}
	return (stack[top--]);
}

int	peek(int *stack)
{
	if (top == -1)
	{
		printf("STACK IS EMPTY\n");
		return (-1);
	}
	return (stack[top]);
}

int	f_atoi(char *str)
{
	int n;
	int i;

	i = 0;
	n = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	printf("converted number is: %d\n", n);
	return (n);
}
