#include<stdio.h>
int main()
{
   /*char dob[20] ;
   printf("Enter the DOB : ");
   scanf("%s",dob);
   
   int dd,mm,yy;
   sscanf(dob,"%d-%d-%d",&dd,&mm,&yy);
   printf("Date is : %d\n",dd);
   printf("Month is : %d\n",mm);
   printf("Year is : %d\n",yy);*/
   
   int a,b;
   printf("Enter a number: ");
   scanf("%d",&a);
   printf("Enter another number: ");
   scanf("%d",&b);
   char str[30];
   sprintf(str,"%dx2 + %dx",a,b);
   printf("%s\n",str);
   
   
   
   
   return(0);
}
