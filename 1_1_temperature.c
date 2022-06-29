// Temperature of a city in fahrenheit degrees is input through the keyboard. Write  c program to convert this temperature into centrigrade degrees.

#include <stdio.h>
int main()
{
  float fahrenheit,celcius;
  printf("Enter the tempertaure in fahrenheit : ");
  scanf("%f",&fahrenheit);
  celcius=(fahrenheit-32)*5/9;
  printf("The temperature is converted in celcius %f \n" , celcius);
  return 0;
} 
