#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d" ,&n);
    float a,b,c,sum,avg;
    for (i=1;i<=n;i++)
    {
        scanf("%f%f%f", &a, &b, &c);
        sum=a*2+b*3+c*5;
        avg=sum/10;
        printf("%.1f\n", avg);
    }
    return 0;

}
