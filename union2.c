#include<stdio.h>
#include<string.h>

struct student
{
     char name[20];
     int id;
     char gender[2];
     char parentName[20];
     float marks;
};

struct employee
{
     char name[20];
     int id;
     char gender[2];
     float salary;
     float hike;
};
union member
{
      struct student s;
      struct employee e;
};
 int main()
 {
    union Member m1;
    m1.s.id = 123;
   
    
    return 0;
    }
    
