#include <stdio.h>

int main()
{
    int a[3] = {0, 1, 2};
    int* p = a + 1;
    //*p--      answer 1
    //*--p      answer 0
    //(*p)--    answer 1
    //--*p      answer 0
    
    //printf("*p-- is %d\n", *p--);
    //printf("*--p is %d\n", *--p);
    //printf("(*p)-- is %d\n", (*p)--);
    printf("--*p is %d\n", --*p);
    return 0;
}
