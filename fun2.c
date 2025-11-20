// write a c function whhich will accepts 1 input parameter r and returns the peremeter of a cirlce, declare pie as constant
// 2*pie*r

#include <stdio.h>

float cic(int r)

{
   const float pi = 3.14;
   float circle = 2 * pi * r;
   return circle;
}
void main()
{
    int r = 3;
    printf("the area is:%f",cic(r));
}