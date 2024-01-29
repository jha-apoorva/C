   #include<stdio.h>
#include<stdlib.h>
int *fun()
{
  /*1 int a = 5;
    return &a;*/
  
  /*2 int a;
  int *ptr; ptr = &a; *ptr = 5;*/
  
  /*3 int *ptr = (int *) malloc(sizeof(int));
  *ptr = 5;
  return ptr;*/
  
  int *ptr = (int *) malloc(10*sizeof(int));

  }
}

int main()
{
  int *ptr = fun();
  //printf("a = %d\n",*ptr);

  return(0);
  }
