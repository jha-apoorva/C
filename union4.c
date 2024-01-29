#include<stdio.h>

struct Member
{
     char name[20];
     int id;
     char gender[2];
     union special1
     {
         char parentName[20];
         float salary;
    } s1;

    union special2
     {
          float marks;
          float hike;
     } s2;
 };
 
 int main()
 {
 
 
    return 0;
 }
