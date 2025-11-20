#include <stdio.h>
void main()
{
    int a=19;
    int b=23;
    printf("%d\n",myadd(a,b));


    int c=23;
    int d=19;
    printf("%d\n",myadd(c,d));
}
int myadd(int a, int b)
{
    int sum = a+b;
    return sum;
}