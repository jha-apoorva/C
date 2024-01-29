#include<stdio.h>
#include<unistd.h>

int main()
{
       int a=5;
       int r = fork();
       a=20;
       
       if(r!=0)
       {
          printf("Parent\n");
          a=a+3;
       }
       else
       {
           printf("Child\n");
           a=a+5;
       }
       printf("a=%d\n",a);
       return(0);
       }
