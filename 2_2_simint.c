// Calculation of simple intrest.

#include<stdio.h>
int main()
{
  int P,n;
  float si,r;
  printf("Enter the value of P : \n");
  scanf("%d",&P);
  printf("Enter the value of n : \n");
  scanf("%d",&n);
  printf("Enter the value of r : \n");
  scanf("%f",&r);
  si=(P*r*n)/100;
  printf("The simple interest is %f \n",si);
  return 0;
}