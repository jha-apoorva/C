#include <stdio.h>
int main()
{
   int a=1,b=2,c=3,d=4;
   printf("Address of a : %p\n",&a);
   printf("Address of b : %p\n",&b);
   printf("Address of c : %p\n",&c);
   printf("Address of d : %p\n",&d);
   int *p;
   p = &a;
   printf("Value at %p = %d\n",p+0,*(p+0));
   printf("Value at %p = %d\n",p+1,*(p+1));
   printf("Value at %p = %d\n",p+2,*(p+2));
   printf("Value at %p = %d\n",p+3,*(p+3));
   return(0);
   }
