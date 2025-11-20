#include <stdio.h>

void main()
{
    int t;
    int sale = 0;
    int q[3] = {3, 4, 10};
    int s[3] = {4, 6, 1};

        for(int i=0; i<3; i++)
      {
        t = q[i]*s[i];
        sale = sale + t;
      }  
      printf("total sale is:%d",sale);
    
}