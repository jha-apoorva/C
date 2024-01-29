#include<stdio.h>
#include<stdlib.h>

int main()
{
     FILE *f;
     f = fopen("studentdata.txt","r");
     char ch[20];
      if(f == NULL) {
                printf("File is not opened .....\n");
                exit(0);
                
     while (fgets(ch,19,f) != NULL) {
           printf("%s",str);
      }
     //printf("%s",str);
     
     
     printf("\n");
     
