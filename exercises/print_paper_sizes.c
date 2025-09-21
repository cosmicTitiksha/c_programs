// This program is to print paper sizes
#include <stdio.h>
int main()
{
  int A0, A1, A2, A3, A4, A5, A6, A7, A8, a, b;
  a = 1189;
  b = 841;
  printf("Size of A0 in mm: %d X %d\n", a, b);
  printf("Size of A1 in mm: %d X %d\n", b, a/2);
  printf("Size of A2 in mm: %d X %d\n", a/2, b/2);
  printf("Size of A3 in mm: %d X %d\n", b/2, a/4);
  printf("Size of A4 in mm: %d X %d\n", a/4, b/4);
  printf("Size of A5 in mm: %d X %d\n", b/4, a/8);
  printf("Size of A6 in mm: %d X %d\n", a/8, b/8);
  printf("Size of A7 in mm: %d X %d\n", b/8, a/16);
  printf("Size of A8 in mm: %d X %d\n", a/16, b/16);
  return 0;
}