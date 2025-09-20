// This program is to find aggregate and percentage of 5 subjects
#include <stdio.h>
int main()
{
  int s1, s2, s3, s4, s5, aggr;
  float per;
  printf("Enter marks of 5 subjects space seperated : ");
  scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
  per = (s1+s2+s3+s4+s5)/5;
  aggr = s1 + s2 + s3 + s4 + s5 ;
  printf("Percentage of 5 subjects is : %f and Aggregate is : %d", per, aggr);
  return 0;
}