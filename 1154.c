#include<stdio.h>
int main()
{
  int n, sum=0;
  float avg;
  float count=0;
  while(1)
    {
      scanf("%d", &n);
      if(n<0) break;
      sum=sum+n;
      count++;
    }
    avg=sum/count;
    printf("%.2f\n", avg);
    return 0;
 }
