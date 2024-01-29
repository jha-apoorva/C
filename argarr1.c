#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]){
   /*printf("The size of arguments : %d\n",argc);
   for(int i=0;i<argc;i++)
   {
    printf("%s\n",argv[i]);
    }*/
    int count = 0;
      for(int j=0;j<strlen(argv[1]);j++) {
        
        if(argv[1][j] == ' ')
            count++;
   }
   printf("No. of spaces = %d\n",count);
    return(0);
    }

