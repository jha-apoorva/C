#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ** foo()
{
     char **ptr = (char **) malloc(4*sizeof(char *));
     char str[30];
     int len;
     printf("Enter name : ");
     scanf(" %[^\n]s",str);
     len = strlen(str);
     *(ptr+0) = (char *) malloc ((len+1)*sizeof(char));
     strcpy(*(ptr+0),str);
     printf("Enter name : ");
     scanf(" %[^\n]s",str);
