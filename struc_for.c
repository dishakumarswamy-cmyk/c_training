#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char name[100];
    char author[100];
    int year;
};
void main()
{
    int n;
    printf("enter no of books:");
    scanf("%d",&n);
    struct book b[n];
    for(int i = 0; i<n; i++)
    {
        printf("enter the name of book:");
        scanf("%s",b[1].name);

        printf("enter the author of book:");
        scanf("%s",b[1].author);

        printf("enter the year:");
        scanf("%s",b[1].year);
    }
}