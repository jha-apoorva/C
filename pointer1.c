#include<stdio.h>

int main()
{           
             char a = 'A';
          // int a =5;
           printf("Value in a = %d\n",a);
           printf("Size in a = %ld\n",sizeof(a));
           printf("Address in a = %p\n",&a);
           
           // int *p;
           char  *p;
           p = &a;
           printf("Value of p = %p\n",p);
           printf("Size in p = %ld\n",sizeof(p));
           printf("Address of  p = %p\n",&p);
           return(0);
           }
