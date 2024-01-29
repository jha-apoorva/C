#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
//execl(char *path_prog, char *arg1, char *arg2, char *arg3, .......... , NULL)
//execlp(char *prog_name, char *arg1, char *arg2, char *arg3, .......... , NULL)
// *prog_name should be in PATH env variable.
int main()
{
    
     if(fork() == 0) {
               
              //execl("/usr/bin/ls","ls","-l",NULL);
              execlp("ls","ls","-l",NULL);
      }

     return(0);
}
