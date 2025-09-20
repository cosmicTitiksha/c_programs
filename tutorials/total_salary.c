// Calculating the total salary of Ramesh
#include <stdio.h>
int main()
{
  float base, da, house, gross;
  printf("Enter the base Salary of Ramesh : ");
  scanf("%f", &base);
  da = base * 0.4 ; 
  house = base * 0.2 ;
  gross = base + da + house ;
  printf("Total salary of Ramesh is : %f", gross);
}