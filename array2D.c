#include <stdio.h>
int main()
{               
            /*   int arr[2][3] = {{1,2,3},{4,5,6}};
               for(int i=0;i<2;i++)
               {
                     for(int j=0;j<3;j++)
                     {
                          printf("%d\t",arr[i][j]);
                          
                      }
                      printf("\n");
                 }
                 printf("\n");
                 for(int j=0;j<3;j++)
               {
                     for(int i=0;i<2;i++)
                     {
                          printf("%d\t",arr[i][j]);
                          
                      }
                      printf("\n");
                 } 
               int arr[2][3];
               for(int i=0;i<2;i++)
               {
                     for(int j=0;j<3;j++)
                     {
                          scanf("%d",&arr[i][j]);
                      }
                 }  
                 int (*p)[3];
                 p=arr;
                  for(int i=0;i<2;i++)
               {
                     for(int j=0;j<3;j++)
                     {
                          printf("%d\t", *(*(p+i)+j));
                          
                      }
                      printf("\n");
                 }
                 int *c;
                 c = &arr[0][0];
                   for(int i=0;i<2;i++)
               {
                     for(int j=0;j<3;j++)
                     {
                          printf("%d\t", *(*p+(i*3)+j));
                          
                      }
                      printf("\n");
                 }*/
                 int arr[2][3];
                 int size = sizeof(arr)/sizeof(arr[0]);
                 printf("%d\n",size);
       return(0);
}
