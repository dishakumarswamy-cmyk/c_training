#include <stdio.h>
void names(char first[],char last[],int sw)
{
    int i = 0;
    char full[100];
    while(first[i]!= '\0')
    {
        full[i] = first[i];
        i++;
    }
    full[i] = ' ';
    i++;

    int j = 0;
    while(last[j]!= '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }

    full[i] = '\0';
    printf("%s", full);
    int len = i + 1;
    if(len<sw)
    printf("it fits");
    else
    printf("it does not fit");
}

    void main()

    {
        char first[100] = "raj";
        char last[100] = "kumar";
        int sw = 6; 
        names(first,last,sw);
        
    }

