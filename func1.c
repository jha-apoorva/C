#include <stdio.h>
int add (int a,int b)
{
        b = a+b;
        return(b);
 }
 int main(){
       int a=5;
       int b=6;
       printf("Addition is: %d\n",add(a,b));
       printf("b = %d\n",b);
       return(0);
}
