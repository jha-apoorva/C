#include<stdio.h>

struct complex{

int real;
int img; // realA+ i imgA
};

int main(){
struct complex c1;
printf("Enter complex1:  ");
scanf("%d %d", &c1.real,&c1.img);

struct complex c2;
printf("Enter real2: ");
scanf("%d %d", &c2.real, &c2.img);

printf("Sum = %d + %di\n",c1.real + c2.real,c1.img + c2.img);

printf("Diff = %d + (%di)\n",c1.real - c2.real,c1.img - c2.img);

return(0);
}

