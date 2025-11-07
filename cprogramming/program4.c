#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("|Index\t|Value  |\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|%d\t|%d\t|\n", i, arr[i]);
    }

    return 0;
};