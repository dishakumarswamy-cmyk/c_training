#include <stdio.h>
int main()
{
    int n = 5;
    int arr[] = {19, 23, 45, 56, 78};

    int *p = arr;
    printf("arr using pointer:");

    for(int i=0; i<n; i++)
    {
        printf("%d  ",*(p + i));
    }
}