#include <stdio.h>
#include <stdlib.h>

void func(int &x, int &y) {
    x += x;
    y += y;
}

int main()
{
    int array[2] = {1, 3};
    func(array[0], array[1]);
    printf("array[0] is %d\n", array[0]);
    printf("array[1] is %d\n", array[1]);
    return 0;
}