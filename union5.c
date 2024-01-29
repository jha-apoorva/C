#include<stdio.h>
#include<string.h>

struct Meats
{
         char meatType;
         char datePackaging[11];  
         char dateExpiry[11]; 
} M;
     
struct Produce
{
          char type;
          char dateReceived[11];
} P;
     
struct Dairy
 {
          char dateExpiry[11];
 } D;
     
struct CannedGood
{
          char dateExpiry[11];
          int aisleNo;
          char aisleSide;
} C;
     
struct NonFoods
{
           char cat;
           int aisleNo;
          char aisleSide;
} N;
struct Items
{
     char itemName[20];
     int cost;
     char cat;
     union special
     { 
        struct Meats M;
        struct Produce P;
        struct Dairy D;
        struct CannedGood C;
        struct NonFoods N;
        
     } sp;
 };
void read_input(struct Item *p, char type)
{
   printf("Enter the name of the item: ");
   scanf("%s",p->name);
   printf("Enter the cost:");
   scanf("%d",&p->cost);
   p->cat = type;
   switch(type)
   {
       case 'M':
       printf("Enter meatType: ");
       scanf("%c",&p->sp.M.meatType);
       printf("Enter packaging date:");
       scanf("%s",&p->sp.M.datePackaging);
       printf("Enter the expiry date:");
       scanf("%s",&p->sp.M.dateExpiry);
       break;
       case 'P':
       printf("Enter produceType:");
       scanf("%c",&p->sp.P.type);
       printf("Enter dateReceived:");
       scanf("%s",&p->sp.P.dateReceived);
       break;
       case 'D':
       printf("Enter the expiry date:");
       scanf("%s",&p->sp.D.dateExpiry);
       break;
       case 'C':
       printf("Enter the expiry date:");
       scanf("%s",&p->sp.C.dateExpiry);
       printf("Enter aisle no:");
       scanf("%d",&p->sp.C.aisleNo);
       printf("Enter aisle side:");
       scanf("%c",&p->sp.C.aisleSide);
       break;
       case 'N':
       printf("Enter foodType:");
       scanf("%c",&p->sp.N.cat);
       printf("Enter aisle no:");
       scanf("%d",&p->sp.N.aisleNo);
       printf("Enter aisle side:");
       scanf("%c",&p->sp.N.aisleSide);
       break;
   
int main()
{

struct Item i;
char type;
printf("Enter the type of item:");
scanf("%c",&type);

