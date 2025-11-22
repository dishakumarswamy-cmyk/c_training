#include <stdio.h>
void fake_swap(float ca,float cb)
{
    float temp;
    temp = ca;
    ca = cb;
    cb = temp;
    printf("fake swap is :ca = %f cb = %f\n",ca,cb);
}

void real_swap(float *pca, float *pcb)
{
    float temp;
    temp = *pca;
    *pca = *pcb;
    *pcb = temp;
    printf("real swap is : *ca = %f *cb = %f\n",*pca,*pcb);
}
void main()
{
    float ca,cb;
    printf("enter the curr a:\n");
    scanf("%f",&ca);
    printf("enter the curr b:\n");
    scanf("%f",&cb);

    fake_swap(ca,cb);
    printf("fake swapping is :ca = %f cb = %f\n",ca,cb);

    real_swap(&ca,&cb);
    printf("real swapping is :ca = %f cb = %f\n",ca,cb);
    
}