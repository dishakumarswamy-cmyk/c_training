// wrtie a function whuch will * 3 no and call it ref

#include <stdio.h>
void mul_ref(int *a, int *b, int *c)
{
    int pro = (*a)*(*b)*(*c);
    printf("%d ", pro);
}

void main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    mul_ref(&a,&b,&c);
}