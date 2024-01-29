#include<stdio.h>
int main(){
          /*int a,b,c;
          a=1000;
          b=20;
          c=13450;
          printf("%5d\n",a);
          printf("%5d\n",b);
          printf("%5d\n",c);
         */
         /*int a,b,c,d,e,f;
         a=1;
         b=9;
         c=56;
         d=32;
         e=892;
         f=534;
         printf("%-3d%3d\n",a,b);
         printf("%-3d%3d\n",c,d);
         printf("%-3d%3d\n",e,f);
         */
         /*float a,b,c;
         a=12.345;
         b=169.166;
         c=5469.333;
         printf("%8.3f\n",a);
         printf("%8.3f\n",b);
         printf("%8.3f\n",c);
         */
         /*double a;
         a=85.1;
         printf("%d\n",sizeof(&a));
         float a;
         a=85.1;
         printf("%d\n",sizeof(&a));
         printf("%f\n",0.7);
          float a=0.7;
          printf("%d\n",0.7==a);
         printf("%c\n",65);
         float a,b,c,d;
         a=4.0;
         b=2.0;
         c=1.0;
         d=b*b-4*a*c; */
         float rate = 0.35;
         float start;
         float end;
         printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
         printf("Enter beginning odometer reading => ");
         scanf("%f",&start);
         printf("Enter ending odometer reading => ");
         scanf("%f",&end);
         printf("You travelled ");
         printf("%.1f",(end-start));
         float fare;
         fare=(end-start)*rate;
         printf(" miles.At $0.35 per mile,\nyour reimbursement is $");
         printf("%.2f\n",fare);
         
         return(0);
          }
