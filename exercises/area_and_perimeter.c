// The program is to output perimeter and area of rectangle and circle upon user's input
#include <stdio.h>
int main()
{
  float length, breadth, radius, per_rec, ar_rec, cir_cir, ar_cir;
  printf("Enter the length and breadth of rectangle respectively : ");
  scanf("%f %f", &length, &breadth);
  per_rec = 2 * (length + breadth);
  ar_rec = length * breadth ;
  printf("Perimeter of Rectangle is : %f\n", per_rec);
  printf("Area of rectangle is : %f\n", ar_rec);
  printf("Enter the radius of the circle : ");
  scanf("%f", &radius);
  cir_cir = 2 * 3.14 * radius;
  ar_cir = 3.14 * radius * radius ;
  printf("Circumference of circle is : %f\n", cir_cir);
  printf("Area of circle is : %f\n", ar_cir);
  return 0;
}