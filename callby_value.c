#include <stdio.h>
struct stud
{
    float marks;
    int rank;
};

void edit (struct stud s1)
{
    printf("before change:%f\n",s1.marks);
    s1.marks = 92.4;
    printf("after change :%d\n",s1.rank);
    
}
void main()
{
    struct stud s1 = {92.4,3};
    edit(s1);
    printf("after chaning:%f\n",s1.marks);
}

