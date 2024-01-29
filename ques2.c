#include<stdio.h>
int main() {
    int arr1[] = {5,7,4,5,8};
    int arr2[] = {12,16,20,19,14};
    
    int sz1 = sizeof(arr1)/sizeof(int);
    int sz2 = sizeof(arr2)/sizeof(int);
    int arr3[sz1+sz2];
    for(int i=0;i<sz1;i++) {
         arr3[2*i] = arr1[i];
         arr3[2*i+1] = arr2[i];
    }
    for(int i=0; i<(sz1+sz2);i++) {
       printf("%d ",arr3[i]);
    }
    printf("\n");
    return(0);
    }
