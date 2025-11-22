// write a c progrsam with a function with variadic arrgument 

#include <stdio.h>
#include <stdarg.h>

void sum(int count, ...)
{
    int result = 0;
    va_list args;
    va_start(args, count);

    for (int i = 1; i <= count; i++)
     {
    
        int n = va_arg(args, int);
        result = result + n;
    }

    va_end(args);
    printf("%d",result);

}

void main()
{
    sum(6,1,2,3,4,5,6);
}



