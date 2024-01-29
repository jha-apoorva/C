# include <stdio.h>
# include <math.h>
void payment()
{        
         float purchasePrice;
         printf("Enter purchase price : ");
         scanf("%f",&purchasePrice);
         float downpay;
         printf("Enter downpayment :");
         scanf("%f",&downpay);
         float annualRate;
         printf("Enter annual interest rate :");
         scanf("%f",&annualRate);
         int noPayment;
         printf("Enter no. of payments:");
         scanf("%d",&noPayment);
         float amtBorrowed = (purchasePrice - downpay);
         printf("Amount borrowed $ %.2f\n",amtBorrowed);
         float a = (1+(annualRate/12));
         float b = pow(a, -noPayment);
         float payment = ((annualRate/12)*amtBorrowed)/(1-b);
         printf("Your payment is $ %.2f\n",payment);
         }
         int main(){
          payment();
         return(0);
         }
         
     
