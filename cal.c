#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
//execl(char *path_prog, char *arg1, char *arg2, char *arg3, .......... , NULL)
int main()
{
     sleep(10);
     if(fork() == 0) {
               sleep(10);
               execl("add.o","./add.o","5","6",NULL);
      }
      if(fork() == 0) {
               sleep(10);
               execl("mul.o","./mul.o","5","6",NULL);
     }
     return(0);
}
