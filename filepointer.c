//Using file pointer to access files
#include<stdio.h>
#include<stdlib.h>
int main() {
     // stdin,stdout,stderr
     //FILE  *f;
     // fopen(const char *filepath, char  *mode)
     // r : read operation
     // open("f1.txt",O_RDONLY);
     // char getc(FILE *fp);
     // EOF = end of file
     /*f = fopen("f1.txt","r");
     char ch;
     //ch = getc(f);
     while((ch = getc(f)) != EOF) {
                 printf("%c",ch);
                 //ch = getc(f);
     }
     printf("\n");
     fclose(f);
     
     printf("Enter a character : ");
     ch = getc(stdin);
     printf("User entered data =  %c\n",ch);
     
     int a;
     float b;
     char c;
     char d[20];
     
     FILE *f = fopen("data1.txt","r");
     if(f == NULL) {
                printf("File is not opened .....\n");
                exit(0);
     }
      // fscanf(f,"%d %f %c %s",&a,&b,&c,d);
      fscanf(stdin,"%d %f %c %s",&a,&b,&c,d);
     printf("Data from file :- %d %f %c %s\n",a,b,c,d);

    char str[200];
    FILE *f = fopen("f1.txt","r");
     if(f == NULL) {
                printf("File is not opened .....\n");
                exit(0);
     }
    // fgets(str,199,f);
    // printf("%s",str);
     
    // fgets(str,199,f);
    // printf("%s",str);
     
     while (fgets(str,199,f) != NULL) {
           printf("%s",str);
      }
     //printf("%s",str);
     
     
     printf("\n");
     
     
    char str[200];
    FILE *f = fopen("f1.txt","r");
     if(f == NULL) {
                printf("File is not opened .....\n");
                exit(0);
                }
     FILE *f1    =  fopen("apoorva.txt","w");
     if(f1== NULL) {
                printf("Write File is not opened .....\n");
                exit(0);
                }
      char s;
      while((s=getc(f)) != EOF) {
                putc(s,f1);
       }
       */
      // r : read mode
      // w : write mode (deletes the content)
      // a : append mode
      // r+ : read & write mode
      //rb : read mode for binary
      //wb : write mode for binary
      // ab : append mode for binary
      // rb+ : read and write mode for binary
    char str[200];
    FILE *f = fopen("f1.txt","r");
     if(f == NULL) {
                printf("File is not opened .....\n");
                exit(0);
                }
     FILE *f1    =  fopen("f.txt","a");
     if(f1== NULL) {
                printf("Write File is not opened .....\n");
                exit(0);
                }
      putc("\n",f1);
      char s;
      while((s=getc(f)) != EOF) {
                putc(s,f1);
       }
     fclose(f);
     
     return(0);
     }
     
