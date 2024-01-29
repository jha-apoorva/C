#include<stdio.h>

int main()
{
     int count = 10;
     int *ptr = &count;
     *ptr = 20;
     printf("count = %d\n",*ptr);
     *ptr = 2 + *ptr;
     printf("count = %d\n",*ptr);
     *ptr = ++(*ptr);
     printf("count = %d\n",*ptr);
     return(0);
     }
     
