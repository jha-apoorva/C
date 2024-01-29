#include<stdio.h>
#include<unistd.h>

int main()
{
   for(int i=0;i<3;i++)
            //if(!fork())
            if(fork())
                       while(1);
            printf("PID = %d\n",getpid());
       return(0);
       }
