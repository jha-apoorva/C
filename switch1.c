#include <stdio.h>
int main()
{ 
      float marks=0;
      printf("Enter your marks: ");
      scanf("%f", &marks);
      char grade;
      /*switch((int)marks/10)
      {
      case 10: grade ='O';
                    break;
      case 9 :  grade ='O';
                    break;
      case 8 : grade ='A';
                    break;
      case 7 : grade ='B';
                    break;             
      default: printf("Invalid");
      }*/
      switch((int)marks)
      {
      case 90 ... 100 : grade ='O';
                            break;
      case 80 ... 89  :  grade ='A';
                           break;
      case 70 ... 79 : grade ='B';
                            break;         
      default: printf("Invalid");
      }
      printf(" %c\n",grade);
       return(0);
}
