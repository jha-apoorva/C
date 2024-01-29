#include<stdio.h>
#include<string.h>
int main()
{
 char str1[100];
 int flag = 0;
 int count = 0;
 while(flag!=-1){
 flag = scanf("%s",str1);
 if(strcmp(str1,"am") ==0) {
 count++;
 }
 }
 printf("%d\n",count);
 return(0);
 }
