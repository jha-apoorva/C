#include <stdio.h>
#include <math.h>
float Area(int *p)
{
   float area;
   float p1 = *(p+0);
   float p2 = *(p+1);
   for(int i=0,j=1;i<14;j<14;i+=2;j+=2){
   
  area = 1/2*abs((*(p1+i+1)+*(p1+i))*(*(p2+1+j)) - (*(p2+j)));
  }
return area;
} 
int main()
{   
    float arr[14];
    for(int i=0;i<14;i++){
         scanf("%d",&arr[i]);
         float areas = Area(
         }
         printf("%d\n",maxValue);
         return(0);
    
