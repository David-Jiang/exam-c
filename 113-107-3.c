#include <stdio.h>
#include <stdlib.h>

int recv(int n) {
    if (n == 0) {
        return 1;
    }
    return 2 * recv(n - 1) + 3;
}

int main()
{
    int a = recv(5);
    printf("%d\n", a);
    return 0;
}