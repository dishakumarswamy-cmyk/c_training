#include <stdio.h>
int search(int arr[], int key, int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int key;
    int n;
    printf("enter key\n");
    scanf("%d",&key);
    printf("enter n:\n");
    scanf("%d",&n);
    printf("%d", search(arr,key,n));
}