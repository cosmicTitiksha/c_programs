// The program is to convert kilometers to meters, feet, inches and centimeters
#include <stdio.h>
int main()
{
  float km, m, feet, inches, cm;
  printf("Enter the distance in kilometers : ");
  scanf("%f", &km);
  m = km * 1000 ;
  feet = km * 3280.83 ;
  inches = km * 39370.08 ;
  cm = km * 100000;
  printf("In meters : %f\n",m);
  printf("In feet : %f\n", feet);
  printf("In inches : %f\n", inches);
  printf("In centimeters : %f\n", cm);
  return 0;
}