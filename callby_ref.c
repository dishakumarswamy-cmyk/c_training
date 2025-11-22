#include <stdio.h>
struct stud
{
    float marks;
    int rank;
};

void edit (struct stud *s1)
{
    printf("before change:%f\n",s1->marks);
    s1->marks = 85.5;
    printf("after change:%d\n",s1->rank);
}
void main()
{
    struct stud s1 = {92.5,2};
    edit (&s1);
    printf("after changing:%f\n",s1.marks);

}
