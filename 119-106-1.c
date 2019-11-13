#include <stdio.h>
#include <string.h>
#define N 10
void main()
{
    static struct girl {
        char *name;
        int year;
    } *t, *p[N], a[]={"Ann",18,"Rolla",19,"Nancy",16,"Eluza",17,"Juliet",18,"Machilda",20,
        "Emy",15,"Candy",16,"Ema",17,"Mari",18};
        
    char *min;
    int s, i, j;
    for (int i = 0; i < N; i++) {
        p[i]=&a[i];
    }
    for (int i = 0; i < N - 1; i++) {
        min = p[i] -> name;
        s=i;
        for (int j = i + 1; j < N; j++) {
            if (strcmp(p[j] -> name, min) < 0) {
                min = p[j] -> name;
                s=j;
            }
        }
        t=p[i];
        p[i]=p[s];
        p[s]=t;
    }
    for (int i = 0; i < N; i++) {
        printf("%10s%4d\n", p[i] -> name, p[i] -> year);
    }
}