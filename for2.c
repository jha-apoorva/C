#include <stdio.h>
int main(){
   int student;
   scanf("%d",&student);
   
   
   for(int i=1;i<=student;i++){
       int marks=0;
       for(int j=1;j<=3;j++){
        int temp=0;
       double percentage=0;
       scanf("%d",&temp);
         marks += temp;
         
       }
      float  percentage = (marks/150.0)*100;
       printf("Percentage of  student %d = %.2f%%\n",i,percentage);
       if(percentage>=90)
         printf("Grade : O\n");
         else if(percentage>=80)
         printf("Grade : A\n");
         else if(percentage>=70)
         printf("Grade : B\n");
         else if(percentage>=60)
         printf("Grade : C\n");
         else
         printf("Fail\n");
         }
       return(0);
       }
