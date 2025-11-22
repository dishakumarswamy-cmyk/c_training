// create a structure with 3 variables name of the car max speed price. Store this in arr of structures and display them 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[100];
    float speed;
    float price;
};
void main()
{
    int n;
    printf("enter no of cars:");
    scanf("%d",&n);
    struct car c[n];
    for(int i = 0; i<n; i++)
    {
         printf("enter the name of car:");
        scanf("%s",c[i].name);

        printf("enter the speed of car:");
        scanf("%f",&c[i].speed);
      
        printf("enter the price:");
        scanf("%f",&c[i].price);
    }

    printf("information:");
    for(int i = 0; i<n; i++)
    {
        printf("%s\n",c[i].name);
        printf("%f\n",c[i].speed);
        printf("%f\n",c[i].price);
        
    }
    
}

