#include <stdio.h>
int main()
{     
      float n;
      printf("Enter Richter Scale no: ");
      scanf("%f",&n);
      n=n*10;
      switch((int)n){
      case 0 ... 49 : printf("Little or no damage\n");
                           break;
      case 50 ... 54 : printf("Some damage\n");
                            break;
      case 55 ... 64 : printf("Serious damage:walls may crack or fall\n");
                             break; 
      case 65 ... 74 : printf("Disaster: houses and buildings may colllapse\n");
                             break;
      default: printf("Catastrophe: most buildings destroyed\n");
      }
        return(0);
}
