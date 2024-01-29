#include <stdio.h>
void sum(int *a, int *b){
      int sum=0;
      sum = (*a)+(*b);
      printf("Sum = %d\n",sum); 
      }
 int main(){
      int a=0,b=0;
      printf("Enter a : ");
      scanf("%d",&a);
      printf("Enter b: ");
      scanf("%d",&b);
      sum(&a,&b);
      return(0);
      }
