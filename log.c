#include <stdio.h>

void main()
{
    int age;
    int height;
    printf("enter the number :");
    scanf("%d",&age);

    printf("enter the height :");
    scanf("%d",&height);

    if ((age>12) && (height>4))
    {
        printf("you can ride");
    }
    else {
    printf("you cannot ride");
    }
}