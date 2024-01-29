#include <stdio.h>
int factorial(int *p)
{
    if (*p == 1 || *p==0)
    return 1;
    else{
    int c = *p-1;
    return (*p)*factorial(&c);
    }
    }
 
int main()
{
  int n;
  int *p;
  p = &n;
  printf("Enter n: ");
  scanf("%d",&n);
  int fact = factorial(p);
  printf("%d\n",fact);
  return(0);
  }
