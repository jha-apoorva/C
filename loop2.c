#include <stdio.h>
int main(){
      int flag=0;
      int n=3;
      int c=2;
      while(n<100){
          while(c<n){
          if(n%c==0){
            flag=0;
            }
            else{
            flag=1;
            c++;
            }
            }
             if(flag==1){
            printf("%d\n",n);
            
            }
           c=2;
            n++;
            }
            return(0);
            }
