// add three num and call it by ref

#include <stdio.h>
void add_ref(int *a, int *b, int *c)
{
    int addi = *a+*b+*c;
    printf("%d",addi);
}
void main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    add_ref(&a,&b,&c);
}
