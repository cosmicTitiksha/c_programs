// The program is to find area of triangle when its three sides are given
#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, s, area;
  printf("Enter the three sides of the triangle : ");
  scanf("%f %f %f", &a, &b, &c);
  s = (a + b + c) / 2;
  area = pow(s*(s-a)*(s-b)*(s-c), 0.5);
  printf("The area of the triangle is : %f", area);
  return 0;
}