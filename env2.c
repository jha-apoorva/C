#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[], char *env[])
{
     char **ptr;  char *str, *token, *rem;
     printf("Following are argument variables \n");
     ptr = argv;
     while(*ptr != NULL)
     {
              printf("%s\n", *ptr);
              ptr++;
     }
     printf("Following are environment variables \n");
     ptr = env;
     while(*ptr != NULL)
     {
              str = (char *)malloc(strlen(*ptr)+1);
              strcpy(str,*ptr);
              token = strtok_r(str,"=",&rem);
              if(strcmp(token,"PATH")==0)
              {
                   printf("%s\n",*ptr);
                   printf("%s\n",token);
                   printf("%s\n",rem);
                   int flag=1;
                   token = strtok_r(rem,":",&rem);
                   while(token != NULL)
                   {
                      if(strcmp(token,"/bin")==0)
                      {
                       printf("/bin exist in PATH\n");
                       flag = 0;
                       break;
                      }
                      token = strtok_r(NULL,":",&rem);
                   }
                   }
                      ptr++;
                      free(str);
      }
      return(0);
      }
