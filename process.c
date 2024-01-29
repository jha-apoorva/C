#include<stdio.h>
#include<unistd.h>

int main()
{
       //if(fork() && fork());
      //if(fork() || fork());
      // if(fork() || fork())
      
     /* for (int i=0; i<3;i++)
       //fork();
      // if(fork())
        if(!fork())
        break;
       printf("Hello\n");
       printf("pid = %d\n",getpid());
        printf("ppid = %d\n",getppid());
       while(1);*/
       
       for(int i=0;i<3;i++)
            //if(!fork())
            if(fork())
                       while(1);
            printf("PID = %d\n",getpid());
       return(0);
       }
