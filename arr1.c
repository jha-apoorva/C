#include <stdio.h>


void add_5(int *p){
      for(int i=0; i<4;i++)
      *(p+i) += 5;
      }
int main()
{ 
  int arr[4] = {1,2,3,4};
  //add_5(arr);
  add_5(&arr[0]);
  for(int i=0; i<4;i++)
  {
     printf("%d",arr[i]);
     }
     return(0);
     }
