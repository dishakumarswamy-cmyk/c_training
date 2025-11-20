#include <stdio.h>
void main()
{
    int arr[4] = {56, 76, 87, 23};
    int *p = arr;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}