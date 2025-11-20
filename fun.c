// write the function which will observe two input parameter x,y and returns x^2 and y^2

#include <stdio.h>
int mysqu(int a , int b)
{
    int squ = a*a+b*b;
    return squ;
}
void main()
{
    int a = 2;
    int b = 3;
    printf("the squ is:%d",mysqu(a,b));
}
