#include <stdio.h>
void add();
int main()
{
              add(); add(); add(); add(); add();
              return(0);
}          
void add()
{
  int a,b;
  printf("Enter the 1st value : ");
  scanf("%d",&a);
  printf("Enter the 2nd value : ");
  scanf("%d",&b);
  printf("Sum = %d\n",a+b);
}    

