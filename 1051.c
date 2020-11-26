#include <stdio.h>
int main()
{
    double n,s,a,b,c,d,e,z;
    scanf("%lf", &n);
    if (0<=n && n<=2000)
    {
        printf("Isento\n");
    }
    else if (2000.01<=n && n<=3000)
    {
        a=(n-2000)*0.08;
        printf("R$ %.2lf\n", a);
    }
    else if (3000.01<=n && n<=4500)
    {
        a=(n-2000);b=a-1000; z=(b*0.18)+(1000*0.08);

        printf("R$ %.2lf\n", z);
    }
    else if (4500<n)
    {
        a=(n-2000);b=a-1000; c=b-1500; z=c*0.28+(1000*0.08)+(1500*0.18);
        printf("R$ %.2lf\n", z);
    }
    return 0;
}
