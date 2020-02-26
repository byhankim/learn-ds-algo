#include <unistd.h>

int     main(void)
{
    int arr[5];
    int i;

    i = 0;
    while (i < 5)
    {
        arr[i] = i + 65;
        write(1, &arr[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
} 
