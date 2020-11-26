#include<stdio.h>

int main()
{
   int n,i,a,b,c;
   scanf("%d", &n);
   for(i=1;i<=n;i++)
   {
       a=i;
       b=a*i;
       c=b*i;
       printf("%d %d %d\n", a,b,c);
       printf("%d %d %d\n", a, (b+1), (c+1));
   }
    return 0;
}
