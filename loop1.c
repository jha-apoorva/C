#include <stdio.h>
int main()
{
     /*int c=2;*/
     /*while(c<=100){
     printf("%d\n",c);
     c+=2;
     }*/
     /*do
     {
      printf("%d\n",c);
      c+=2;
      }
      while(c<=100);*/
      /*int n=0;
      printf("Enter a no. in decimal:");
      scanf("%d",&n);
      int b=0;
      int p=1;
      while(n>0){
      b=b+((n%2)*p);
      p=p*10;
      n=n/2;
      }
      printf("%d\n",b);*/
      int c=1;
      int i=2;
      int flag=0;
      while(c<100){
         while(i<c){
          if (c%i==0){
          flag=0;
          i++;
          break;
          }
          else {
          flag=1;
          break;
          }
         }
         c++;
         }
      if(flag==1){
      printf("%d\n",c);
      }
     return(0);
}
