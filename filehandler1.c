#include<stdio.h>
#include<unistdio.h>
#include<fcntl.h>
#include<string.h>

int main() 
{
     char a[2];
     char str[10];
     
     int fd = open("name.txt",O_WRONLY | O_CREAT,0666);
     int fd1 = open("fileread.txt",O_RDONLY):
     while((n = read("fileread.txt",a,1))!=0)
     {   
         strcat(str,a);
         if(a!='\n')
         {  
             printf("%s",a);
             char b[]=strtok(str,"-");
             
             write(fd,b,10);
             str[0] = '\0';
         }
         printf("\n");
      }
      return(0);
 }
           

