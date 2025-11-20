#include <stdio.h>

void swap(float *b1, float *b2)
{
    printf("before hacking : a has %f,b has:%f",*b1,*b2);
    float temp = 0;
    temp = *b1;
    *b1 = *b2;
    *b2 = temp;
    printf("after hacking:a has %f,b has:%f",*b1,*b2);
}
void main()
{
    float B1, B2;
    printf(" enter the value of B1 B2:");
    scanf("%f%f",&B1,&B2);
    swap(&B1,&B2);
}
