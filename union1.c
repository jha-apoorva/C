#include<stdio.h>
#include<string.h>
/*struct member
{
     int roll;
     char id[5];
     char name[20];
     
};*/

union member1
{
     int roll;
     char id[5];
     char name[20];
     
};
     
int main()
{
           //struct member m1;
           union member1 m2;
           //printf("Size of the struct is %ld\n",sizeof(m1));
           printf("Size of the union is %ld\n",sizeof(m2));
           
           m2.roll = 123;
           printf("Roll = %d\n",m2.roll);
           
           strcpy(m2.id,"FAC1");
           printf("Roll = %d\n",m2.roll);
           
           strcpy(m2.name,"Dibya Sundar Das");
           printf("Roll = %d\n",m2.roll);
           printf("Name = %s\n",m2.name);
           printf("Id = %s\n",m2.id);
           return 0;
 }
