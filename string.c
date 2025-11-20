#include <stdio.h>
#include <string.h>

void main()

{
    char name [10] = "disha";
    char new[100] = "hello";     
    printf("%c",name[7]); //access
    printf("the lenght is:%d\n",strlen(name));
    strcat(new,name);//new=hello+disha
    printf("%s", new);

    printf("%d",strstr(new,"h"));
}