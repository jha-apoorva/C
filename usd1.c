#include<stdio.h>

/*struct student{
 char name_s[30] ;
 int roll_s;
 int mark1,mark2,mark3;
 //float cgpa_s;
 float avg;
};
int main()
{
 char name[30] = "Dibya";
 int roll = 123;
 float cgpa  = 6.2;
 
  printf("Size of name %ld\n",sizeof(name));
  printf("Size of roll %ld\n",sizeof(roll));
  printf("Size of cgpa %ld\n",sizeof(cgpa));
  
  struct student s1 = {"Dibya",123,6.2};
  printf("Size of student %ld\n",sizeof(s1));
  
  printf("Name = %s\n",name);
  printf("Roll = %d\n",roll);
  printf("Cgpa = %f\n",cgpa);
  
  printf("Name = %s\n",s1.name_s);
  printf("Roll = %d\n",s1.roll_s);
  printf("Cgpa = %f\n",s1.cgpa_s);
  
  struct student s1;
  
  printf("Enter name : ");
  scanf("%[^\n]s" , s1.name_s);
  printf("Enter roll : ");
  scanf("%d" , &s1.roll_s);
  printf("Enter marks: ");
  scanf("%d %d %d" , &s1.mark1, &s1.mark2, &s1.mark3);
  
  s1.avg = (s1.mark1 + s1.mark2 + s1.mark3)/3.0;
  
  printf("Name = %s\n",s1.name_s);
  printf("Roll = %d\n",s1.roll_s);
  printf("Avg = %f\n",s1.avg);*/
  struct student{
   char name[30];
   int roll;
   int mark[5];
   float avg;
   };
   
   int main(){
   
  struct student s1;
  
  scanf("%s" , s1.name);
  scanf("%d" , &s1.roll);
  for(int i=0; i<5;i++){
  scanf("%d",&s1.mark[i]);
  }
  int sum=0;
   for(int i=0; i<5;i++){
    sum += s1.mark[i];
  }
  s1. avg = sum/5.0;
  printf("Name = %s\n",s1.name);
  printf("Roll = %d\n",s1.roll);
  printf("Avg = %f\n",s1.avg);
  
return(0);
}
