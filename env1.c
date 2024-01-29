#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[], char *env[])
{
     char **ptr;
     ptr = argv;
     while(*ptr != NULL)
     {
             printf("%s\n",*ptr);
             ptr++;
     }
     printf("Following are environment variables \n");
      ptr = env;
         while(*ptr != NULL)
         {
             printf("%s\n",*ptr);
             ptr++;
         }    
     
           
     return(0);
 }
   
