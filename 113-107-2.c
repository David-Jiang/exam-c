#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = arr;
    printf("The memory size of arr is %d\n", sizeof(arr));
    printf("The memory size of ptr is %d\n", sizeof(ptr));
    return 0;
}
