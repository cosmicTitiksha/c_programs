// This code is for converting temperature from fahrenheit to celsius
#include <stdio.h>
int main()
{
  float f, c;
  printf("Enter the temperature in fahrenheit : ");
  scanf("%f", &f);
  c = (f - 32) * 5 / 9 ;
  printf("Temperature in Celsius is %f degree centigrade.", c);
  return 0;
}