#include <stdio.h>
/*int temp;
void swap(int a,int b){
   int temp = a;
   a=b;
   b=temp;
   printf("a = %d\n",a);
   printf("b = %d\n",b);
   }*/
   void swap(int  *a, int  *b){
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
    printf("a = %d\n",*a);
   printf("b = %d\n",*b);
   }
int main()
{
int a=0,b=0;
printf("Enter a : ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
swap(&a,&b);
return(0);
}
