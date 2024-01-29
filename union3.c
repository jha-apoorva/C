#include<stdio.h>
union member
{    
     struct student
     {
     char name[20];
     int id;
     char gender[2];
     char parentName[20];
     float marks;
     } s;

    struct employee
    {
     char name[20];
     int id;
     char gender[2];
     float salary;
     float hike;
     } e;
};
int main()
{
  return 0;
}
