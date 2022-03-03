#include "Converter.h"


int main(void){
int main() {

/*Declare floaters*/

float Swiss_Franc;          /*Swiss Franc*/
float British_Pounds;          /*British pounds*/
float Japanese_Yen;          /*Japanese Yen*/
float Canadian_Dollar;          /*Canadian Dollar*/
float Euros;               /*European Union Euro*/
float USD;               /*US Dollar*/
int   choice;

                   /*Title*/

printf("        Currency Conversion Program\n");

printf("----------------------------------------\n\n");


                  /*Menu*/

     printf("1)   Swiss Franc               \n");
     printf("2)   British Pound             \n");
     printf("3)   Japanese Yen              \n");
     printf("4)   Canadian Dollar           \n");
     printf("5)   Euro                      \n");
     printf("6)   Exit the Program          \n");


printf("\n");
printf("\n");

          /*Input from User*/

printf("Please enter your choice (1-6): ");
scanf("%d",&choice);

while((choice<1) || (choice>6)){
printf("Invalid entry, please Enter 1-6: ");
scanf("%i",&choice);
}
if(choice==1){
printf("Please the amount:  ");
scanf("%f",&Swiss_Franc);

     /*Conversion Calculation 1*/
Swiss_Franc = USD / Swiss_Franc_rate;

}
if(choice==2){
printf("Please enter the amount:  ");
scanf("%f",&British_Pounds);

     /*Conversion Calculation 2*/
British_Pounds = USD / British_Pounds_rate;
}

if(choice==3){
printf("Please enter the amount:  ");
scanf("%f",&Japanese_Yen);

     /*Conversion Calculation 3*/
Japanese_Yen = USD / Japanese_Yen_rate
}

if(choice==4){
printf("Please enter the amount:  ");
scanf("%f",&Canadian_Dollar);

     /*Conversion Calculation 4*/
Canadian_Dollar = USD / Canadian_Dollar_rate;
}

if(choice==5){
printf("Please enter the amount:  ");
scanf("%f",&Euros);

     /*Conversion Calculation 5*/
Euros = USD / Euros_rate;
}

if(choice==6){
printf("Exit the program:  ");

while (getchar() != '\n')
      continue;

  }
  printf("Goodbye!\n");
  return 0;

 }
    //Function

 void dashbar()
 {
  int i = 1;
  while (i < 50)
  {
     putchar ('-');
     i = i + 1;
  }
  putchar ('\n');
 }

      char category;
      int tempChoice;
      int currencyChoice;
      int massChoice;
      int userinputF; // User inputted Fahreinheit;
      int userinputC; // User inputted Celsius;
      int userinputUSDtoEuro; // User inputted for USD to EURO;
      int userinputUSDtoJPY; // User inputted for USD to JPY;
      int userinputUSDtoRMB; // User inputted for USD to RMB;
      int userinputOunce; // User inputted for Ounce;
      int userinputGram; // User inputted for Gram;
      int fahrenheitToCelcius; // variable that stores the converted F->C;
      int celciusToFahrenheit; // variable that stores the converted C->F;
      float USDtoEURO ; // varaible that stores the converted USD->EURO;
      float USDtoJPY; // stores the converted USD->JPY;
      float USDtoRMB; // stores the converted USD->RMB;

      printf("Welcome to Unit Converter! \n");
      printf("Here is a list of conversation to choose from: \n");
      printf("Temperature(T),Currency(C),Mass(M) \n");
      printf("Please enter the letter you want to convert.\n");
      scanf("%c",&category);

      if(category == 'T'){
          printf("Welcome to Temperature Converter! \n");
          printf("Here is a list of conversations to choose from: \n");
          printf("Enter 1 for Fahrenheit to Celsius. \n");
          printf("Enter 2 for Celsius to Fahrenheit. \n");
          scanf("%d",&tempChoice);
          if(tempChoice == 1){
              printf("Please enter the Fahrenheit degree: \n");
              scanf("%d",&userinputF);
              fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
              printf("Celcius: %d",fahrenheitToCelcius);
          }
          else if(tempChoice == 2){
            printf("Please enter the Celcius degree: \n");
            scanf("%d",&userinputC);
            celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
            printf("Fahrenheit: %d",celciusToFahrenheit);
          }
          else
            printf("Please enter the correct choice. \n");
      }

      else if(category == 'C') {
          printf("Welcome to Currency Converter! \n");
          printf("Here is a list of conversations to choose from: \n");
          printf("Enter 1 for USD to Euro. \n");
          printf("Enter 2 for USD to JPY. \n");
          printf("Enter 3 for USD to RMB. \n");
          scanf("%d",&currencyChoice);
          if(currencyChoice == 1){
              printf("Please enter the USD amount: \n");
              scanf("%d",&userinputUSDtoEuro);
              USDtoEURO = userinputUSDtoEuro * 0.87;
              printf("Euro: %.2f",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
          }
          else if(currencyChoice == 2){
              printf("Please enter the USD amount: \n");
              scanf("%d",&userinputUSDtoJPY);
              USDtoJPY = userinputUSDtoJPY * 111.09;
              printf("JPY: %.2f",USDtoJPY);
          }
          else if(currencyChoice == 3) {
            printf("Please enter the USD amount: \n");
            scanf("%d",&userinputUSDtoRMB);
            USDtoRMB = userinputUSDtoRMB * 6.82;
            printf("RMB: %.2f",USDtoRMB);
          }
          else
            printf("Please enter correct choice. \n");
       }

      return 0;
    }