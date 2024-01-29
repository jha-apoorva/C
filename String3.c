#include<stdio.h>
void p_cal(char *str){
   
   int current=2023,year;
   sscanf(&str[7],"%d",&year);
   int age = current-year;
   switch(age){
   case 0 ... 30: printf("Pay $10,000\n");break;
   case 31 ... 50: printf("Pay $20,000\n");break;
   default: printf("Pay $30,000\n");  
  }  
  }
int main()
{
   char dob[20] ;
   printf("Enter the DOB : ");
   scanf("%s",dob);
   
   int dd,mm,yy;
   sscanf(dob,"%d-%d-%d",&dd,&mm,&yy);
   char mon[5];
   switch(mm){
   case 1: sprintf(mon,"%s","Jan"); break;
   case 2: sprintf(mon,"%s","Feb"); break;
   case 3: sprintf(mon,"%s","Mar"); break;
   case 4: sprintf(mon,"%s","Apr"); break;
   case 5: sprintf(mon,"%s","May"); break;
   case 6: sprintf(mon,"%s","Jun"); break;
   case 7: sprintf(mon,"%s","Jul"); break;
   case 8: sprintf(mon,"%s","Aug"); break;
   case 9: sprintf(mon,"%s","Sept"); break;
   case 10: sprintf(mon,"%s","Oct"); break;
   case 11: sprintf(mon,"%s","Nov"); break;
   case 12: sprintf(mon,"%s","Dec"); break;
   }
   char str[20];
   sprintf(str,"%d-%s-%d",dd,mon,yy);
   printf("%s\n",str);
   p_cal(str);
   return(0);
   
 }
