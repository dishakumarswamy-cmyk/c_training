#include <stdio.h>

int sum_digit_recor (int n)
{
    if(n==0)
    return 0;
    int digit = n%10;
    return digit + sum_digit_recor(n/10);
}

void main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    printf("%d",sum_digit_recor(n));
}