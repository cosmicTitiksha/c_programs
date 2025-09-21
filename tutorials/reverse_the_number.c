// This program is to reverse the digits of a 5-digit number
#include <stdio.h>
int main()
{
  int num, d1, d2, d3, d4, d5, digit;
  printf("Enter the five digit number, you want to reverse : ");
  scanf("%d", &num);
  d1 = num % 10;
  num = num / 10;
  d2 = num % 10;
  num = num / 10;
  d3 = num % 10;
  num = num / 10;
  d4 = num % 10;
  num = num / 10;
  d5 = num % 10;
  digit = d1*10000 + d2*1000 + d3*100 + d4*10 + d5;
  printf("The reversed number is : %d", digit);
  return 0;
}