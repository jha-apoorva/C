#include <stdio.h>
int main()
{
      /* float b = 0.7;
       if(b==0.7f)
       printf("Hello\n");
       else
       printf("Bye\n");
       if(printf("Hello") ||  printf("Bye"))
       printf("Welcome\n");
       else
       printf("C prog\n");
       if(printf("Hello") && printf("Bye"))
       printf("Welcome\n");
       else
       printf("C prog\n");*/
       int marks;
       marks=0;
       char grade;
       printf("Enter your grade (O/A/B): ");
       scanf(" %c", &grade);
       switch(grade){
       case 'O': case 'o':printf("%d\n",marks+=10);
                      break;
       case 'A': printf("%d\n",marks+=9);
                     break;
       case 'B': printf("%d\n",marks+=8);
                     break;
       default:  printf("Wrong choice\n");
                  }
       return(0);
  }
