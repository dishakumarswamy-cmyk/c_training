// c program to calculate distace between two points 
// x1,y1 , x2,y2

#include <stdio.h>
#include <math.h>

void main()
{
    int x1,x2,y1,y2;
    printf("enter the value of x1,y1:");
    scanf("%d%d",&x1,&x2);
    printf("enter the value of x2,y2 :");
    scanf("%d%d",&x2,&y2);
    int n1=x2-x1;
    int n2=y2-y1;
    float dist=sqrt((n1*n1)+(n2*n2));
    printf("distance is %f:" , dist);
}