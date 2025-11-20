// write a c function which will accept an arr, its size as n and returns the diff b/w first and last element

#include <stdio.h>
#include <stdlib.h>

int diffarr(int arr[], int n)
{
    int sub = arr[0] - arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5]={2,3,4,5,6};
    int n = 5;
    printf("%d",diffarr(arr,n));
}
    
