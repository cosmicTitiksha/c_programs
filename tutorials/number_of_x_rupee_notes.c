// This program is to find number of notes of Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100
#include <stdio.h>
int main()
{
  int money, Rs_100, Rs_50, Rs_10, Rs_5, Rs_2, Rs_1;
  printf("Enter the amount of money : ");
  scanf("%d", &money);
  Rs_100 = money/100;
  money = money%100;
  Rs_50 = money/50;
  money = money%50;
  Rs_10 = money/10;
  money = money%10;
  Rs_5 = money/5;
  money = money%5;
  Rs_2 = money/2;
  money = money%2;
  Rs_1 = money;
  printf("Number of 100 rupee notes : %d\n", Rs_100);
  printf("Number of 50 rupee notes : %d\n", Rs_50);
  printf("Number of 10 rupee notes : %d\n", Rs_10);
  printf("Number of 5 rupee notes : %d\n", Rs_5);
  printf("Number of 2 rupee notes : %d\n", Rs_2);
  printf("Number of 1 rupee notes : %d\n", Rs_1);
  return 0;
}