#include<stdio.h>
int main(){
               float temp;
               printf("Enter the temp in degree C : ");
               scanf("%f",&temp);
               printf("\n\nTEMP CONVERT\n");
               float temp2;
               temp2 = (((9.0/5)*temp)+32);
               printf("Temp in degree C : %.2f\n",temp);
               printf("Temp in degree F: %.2f\n",temp2);
               return(0);
               }
