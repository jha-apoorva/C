#include<stdio.h>
struct element_t
{
     int atomicNo;
     char name[20];
     char symbol[4];
     char class[15];
     float atwt;
     int elecShell[7];
    
 };
struct element_t scan_element()
 {
 struct element_t ele1;
 scanf("%d", &ele1.atomicNo);
 scanf("%s", &ele1.name);
 scanf("%s", &ele1.symbol);
 scanf("%s", &ele1.class);
 scanf("%f", &ele1.atwt);
 
 for(int i=0; i<7;i++){
   scanf("%d",&ele1.elecShell[i]);
   }
   return ele1;
   }
   
 void print_element(struct element_t *ele1)
 {
  printf("%d\n",ele1 -> atomicNo);
  printf("%s\n",ele1 -> name);
  printf("%s\n",ele1 -> symbol);
  printf("%s\n",ele1 -> class);
  printf("%f\n",ele1 -> atwt);
  for(int i=0; i<7;i++){
   printf("%d    ",ele1 -> elecShell[i]);
   }
   }
 void main()
 {
 
 struct element_t ele1 = scan_element();
 struct element_t *ptr = &ele1;
 print_element(ptr);
 printf("\n");
 return(0);
 }
 
