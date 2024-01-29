#include<stdio.h>
int main() {
     char str[] = "SOA-ITER-IBCS-SUM-IDS-IBCS";
     int count = 0;
     for(int i=0;i<str[i] != '\0';i++) 
         if(str[i]=='-')
            count++;
     int token = count+1;
     char *argv[token+1];
     argv[0] = str;
     int i=0,k=1;
     while(str[i] != '\0') {
           if(str[i] == '-') {
               argv[k] = &str[i+1];
               str[i] = '\0';
               k=k+1;
           }
       i=i+1;
       }
    argv[k] = NULL;
    for(int i=0;i<token;i++)
        printf("%s\n",argv[i]);

printf("Number of tokens are: %d\n",token);
return(0);
}
     
