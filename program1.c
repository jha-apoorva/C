#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<fctnl.h>
#include<string.h>

int main()
{
    int a = 0;
    for(int i=0;i<2;i++){
      if(fork()==0)
      {
        a=i+1;
        break;
      }
    }
    if(a==0)
    {
      char str[20];
      int fd = open("ctrl.txt",O_RDONLY);
      read(fd,str,19);
      while(atoi(str) != 0)
      {
          close(fd);
          sleep(5);
          fd = open("ctrl.txt",O_RDONLY);
          read(fd,str,19);
      }
      printf("Parent\n");
    }
    if(a==1)
    {
      char str[20];
      int fd = open("ctrl.txt",O_RDONLY);
      read(fd,str,19);
      while(atoi(str) != 1)
      {
          close(fd);
          sleep(5);
          fd = open("ctrl.txt",O_RDONLY);
          read(fd,str,19);
      }
      printf("Child1\n");
      fd = open("ctrl.txt",O_WRONLY);
      write(fd,"2",strlen("2"));
      close(fd);
     }
    if(a==2)
    {
      char str[20];
      int fd = open("ctrl.txt",O_RDONLY);
      read(fd,str,19);
      while(atoi(str) != 2)
      {
          close(fd);
          sleep(5);
          fd = open("ctrl.txt",O_RDONLY);
          read(fd,str,19);
      }
      printf("Child1\n");
      fd = open("ctrl.txt",O_WRONLY);
      write(fd,"2",strlen("2"));
      close(fd);
     }
     


   
      
