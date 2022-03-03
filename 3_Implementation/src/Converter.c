#include "Converter.h"
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