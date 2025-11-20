// write a c function which will accept 3 parameters l,b,h and returns volume of the cube 

#include <stdio.h>

int cube(int l, int b, int h)
{
    int cub = l*b*h;
    return cub;
}
void main()
{
    int l = 2;
    int b = 3;
    int h = 4;
    printf("the volume is :%d",cube(l,b,h));
}