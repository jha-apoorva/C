#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]){

    int i;
    char word[30];
    int n;
    int len=0;
    int count = 0;
    n = sscanf(&(argv[i][len]),"%s",word);
    len = strlen(word) + 1;
    while( len < strlen(argv[i]))
    {
       if(strcmp(word,argv[2])==0)
          count++;
          n = sscanf(&argv[i][len],"%s",word);
          len = len+strlen(word)+1;
     }
     printf("\nNumber of token is %d\n",count);
     return(0);
     }    
