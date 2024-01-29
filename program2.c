#include <stdio.h>
int main()
{
    int flag=1;
    float val=0;
    for(int i = 1;i <=99;i+=2)
    { 
        val += flag*(1.0/i);
        flag=flag*(-1);
     }
     float pi = 4.0*val;
     printf("%f\n",pi);
     return(0);
     }
