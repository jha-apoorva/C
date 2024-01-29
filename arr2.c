#include <stdio.h>
int max(int  *p){
 int m = *(p+0);
 for(int i=0;i<20;i++){
        if(m < *(p+i))
        m = *(p+i);
 }
  return m;
  }
int main()
{
   int arr[20];
   int maxValue;
   for(int i=0;i<20;i++){
         scanf("%d",&arr[i]);
         maxValue = max(arr);
         }
         printf("%d\n",maxValue);
         return(0);
         
   }
