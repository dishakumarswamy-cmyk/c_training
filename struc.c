#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
   struct student s1;
   s1.age = 19;
   s1.marks = 92.7;
   strcpy(s1.name , "oyster");

   struct student s2;
   s2.age = 23;
   s2.marks = 99.9;
   strcpy(s2.name , "pearl");

struct student s3 = {"ivory",18,80.5};

   printf("%s",s2.name);

}