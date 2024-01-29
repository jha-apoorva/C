#include <stdio.h>
void matDisplay(int *p , int a, int b){
      for(int i=0; i<a;i++)
      {
         for(int j=0; j<b;j++)
         {
          printf("%d ",*(p+(i*b)+j));
         }
         printf("\n");
         }
         }
void multiply(int *p, int *q , int *r, int a, int b, int c, int d)
{
      for(int i=0; i <= a ;  i++ )
      {
          for(int j=0 ; j<=d ;j++) 
          { 
             *(r+(i*d)+j) = 0;  
             for(int k=0; k<=b ;k++)
             {
             //r[i][j] = r[i][j] + (p[i][k] * q[k][j]);
             *(r+(i*d)+j)  += *(p+(i*b)+k) *  (*(q+(k*d)+j)) ;
            }
          }
      }
}
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    int arr1[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0; j<b;j++)
        {
           scanf("%d",&arr1[i][j]);
        }
        printf("\n");
     }
    scanf("%d",&c);
    scanf("%d",&d);
    int arr2[c][d];
    for(int i=0;i<c;i++)
    {
        for(int j=0; j<d;j++)
        {
           scanf("%d",&arr2[i][j]);
        }
        printf("\n");
     }
    if (b != c){
    printf("Matrix multiplication not possible\n");
    return(0);
    }
    int res[a][d];
    multiply(&arr1[0][0],&arr2[0][0], &res[0][0], a,b,c,d);
    matDisplay(&res[0][0], a,d);
    return(0);
    }
     
