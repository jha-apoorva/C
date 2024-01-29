#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *func()
{
    char *ptr = (char*)malloc(90);
    strcpy((ptr+0),"Apoorva");
    strcpy((ptr+30),"Mom");
    strcpy((ptr+60),"Dad");
    return ptr;
 }
   
 int main()
 { 
     char *p = func(); 
   for(int i=0;i<3;i++){
      printf("%s\n",(p+(i*30)));
    
     }
     return(0);
     }
