#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p = (int *)calloc(4,sizeof(int));
    p[0] = 23;
    p[1] = 19;
    p[2] = 12;
    p[3] = 29;
    printf("%d",p[0]);
    free(p);
}