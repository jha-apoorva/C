#include<stdio.h>
#include<string.h>
struct sci_not_t
{
 float mantissa;
 int exponent;
 
 };
 
 struct sci_not_t scan_sci
 { 
    struct sci_not_t num;
   char value[20];
   scanf("%s",&value);
   num.mantissa = strtok(value,"e");
   num.exponent = strtok(NULL,"\n");
   
 }
 
 
 


