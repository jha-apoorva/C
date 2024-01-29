#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main() 
{ 
     char a[10]; int n;
     int fd = open("f1.txt",O_RDONLY);
     int fd1 = open("f2.txt",O_CREAT | O_WRONLY,0666);
     
     while((n = read(fd,a,9))!=0)
     {
         a[n]='\0';
         printf("%s",a);
         write(fd1,a,n);
     }
     printf("\n");
     return(0);
     }
     
