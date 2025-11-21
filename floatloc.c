#include <stdio.h>
#include <stdlib.h>

void main()
{
    float *p = (float *)malloc(4*sizeof(float));
    p[0] = 23.19;
    p[1] = 19.23;
    p[2] = 12.29;
    p[3] = 29.12;
    printf("%f",p[0]);
    free(p);
}