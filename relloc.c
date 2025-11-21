#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p = (int *)malloc(3*sizeof(int));
    p[0] = 19;
    p[1] = 23;
    p[2] = 12;

    p = (int*)realloc(p, 5*sizeof(int));
    p[3] = 29;
    p[4] = 26;

    for(int i=0; i<5; i++)
    printf("%d\n",p[i]);

}
