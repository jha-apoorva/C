#include<stdio.h>
#include<unistd.h>

int main()
{    
     int a,b;
     printf("Enter a and b : ");
     scanf("%d %d",&a,&b);
     
     int pid1, pid2;
     pid1 = fork();
     pid2 = fork();

     if(pid1==0)
           printf("Sum = %d\",a+b);
     
     return(0);
     }
