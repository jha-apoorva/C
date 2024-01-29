#include<stdio.h>
#include<string.h>
int main()
{
   /*char str[20] = "OSW Class";
   char str1[30];
   char *p = strcpy(str1,str);
   printf("Original string is : %s\n",str);
   printf("Copied string is : %s\n",str1);
   printf("Returned string is : %s\n",p);
   printf("The length of this string is : %ld\n",strlen(str1));*/
   char str1[100],str2[100];
   printf("Enter the 1st String: ");
   scanf("%[^\n]s",str1);
   printf("Enter the 2nd String: ");
   scanf(" %[^\n]s",str2);
   if(strcmp(str1,str2) == 0){
        printf("Its a match\n");
        }
    else{
      printf("Its a mismatch\n");
      }
   
   /*int sz1,sz2,sz3;
   sz1 = strlen(str1);
   sz2 = strlen(str2);
   sz3 = sz1+sz2+2;
   char c_str[sz3];
   for(int i=0; i < sz1;i++)
   c_str[i] = str1[i];*/
  
  /* for(int i = 0 ; i<sz2;i++)
   c_str[sz1+i+1] = str2[i];
   c_str[sz3-1] = '\0';
   strcpy(c_str,str1);
    c_str[sz1] = ' ';
   strcpy(&c_str[sz1+1],str2);*/
   //strcat(str1," ");
 // strcat(str1,str2);
   //printf("Final string : %s\n",c_str);
  // printf("Final string : %s\n",str1);
   return(0);
   }
