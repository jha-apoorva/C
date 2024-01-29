#include <stdio.h>
int* sum(int *a, int *b){
      //int temp;
       //temp = (*a)+(*b);
       *a = *a+*b;
       return(a);
      }
 int main(){
      int a=0,b=0;
      printf("Enter a : ");
      scanf("%d",&a);
      printf("Enter b: ");
      scanf("%d",&b);
      //int  *c = sum(&a,&b);
      //printf("Sum of two no.s : %d\n",*c);
      sum(&a,&b);
      printf("Sum of two no.s : %d\n",a);
      return(0);
      }
