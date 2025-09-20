// Calculation of simple interest by taking user input
#include <stdio.h>
int main()
{
  int p , n;
  float r , si;
  printf("Enter the respective values of principal, number of years and rate : \n");
  scanf("%d %d %f", &p, &n, &r);
  si = p * n * r / 100 ;
  printf("Simple Interest : %f",si);
}