#include <unistd.h>
#include <stdlib.h>

# define ARRAY_SIZE 5

int     f_strlen(char *str);
int     *create(int n);
int     retrieve(int *arr, int idx);
void    store(int *arr, int i, int e);

int     main(void)
{

    int arr[5] = {0};
    int temp;
    int i;

    i = 0;
    temp = -1;
    /*
    arr = create(5);
    */
    temp = retrieve(arr, 2) + 48;
    write(1, &temp, 1);
    while (i < 5)
    {
        store(arr, i, i + 1);
        temp = retrieve(arr, i) + 48;
        write(1, &temp, 1);
        i++;
    }
    return (0);
}

int     f_strlen(char *str)
{
    char *pt;

    pt = str;
    while (*str)
        str++;
    return (str - pt);
}

int     *create(int n)
{
    int *arr;
    int i;

    i = 0;
    arr = (int *)malloc(sizeof(int) * n);
    while (i < n)
    {
        arr[i] = 0;
        i++;
    }
    return (arr);
}

int     retrieve(int *arr, int idx)
{
    char *str;
    
    str = "CANNOT RETRIEVE ARRAY ELEMENT!\n";
    if (idx >= ARRAY_SIZE || idx < 0)
    {
        write(1, str, f_strlen(str));
        return (-1);
    }
    return (arr[idx]);
}

void    store(int *arr, int i, int e)
{
    if (i >= ARRAY_SIZE || i < 0)
    {
        write(1, "ERROR\n", 6);
        return ;
    }
    arr[i] = e;
    return ;
}
