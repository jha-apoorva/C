#include<stdio.h>
int main(){
  //char str[20] = {'H','e','l','l','o','\n','\0','a','b','c'};
  /*char str[20] = "Hello\n";
  printf("%c\n",str[0]);
  printf("%s|",str);
  char name[31];
  scanf("%[^\n]s",name);
  printf("%s %s",str,name);*/
  
  printf("Enter your name : ");
  char name[20];
  scanf("%[^\n]s",name);
  
  printf("Enter your rollno: ");
  int rollno;
  scanf("%d",&rollno);
  printf("Enter your age: ");
  int age;
  scanf("%d",&age);
  printf("Hello %s\n",name);
  printf("Your rollno is %02d\n",rollno);
  printf("Your age is %d years\n",age);
  return(0);
  }
