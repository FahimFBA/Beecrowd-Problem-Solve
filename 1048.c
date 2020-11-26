#include <stdio.h>
int main()
{
    double s,p,q,a,b,c,d,e,f,g,h,i,j;

    scanf("%lf", &s);
    if (s>=0 && s<=400.00)
    {
        p=(s*0.15+s);
        printf("Novo salario: %.2lf\n",p);
        q=(s*0.15);
        printf("Reajuste ganho: %.2lf\n", q);
        printf("Em percentual: 15 %%\n");
    }
    else if (s>=400.01 && s<=800)
    {
        a=(s*0.12+s);
        printf("Novo salario: %.2lf\n",a);
        b=(s*0.12);
        printf("Reajuste ganho: %.2lf\n", b);
        printf("Em percentual: 12 %%\n");
    }
    else if (s>=800.01 && s<=1200)
    {
        c=(s*0.10+s);
        printf("Novo salario: %.2lf\n",c);
        d=(s*0.10);
        printf("Reajuste ganho: %.2lf\n", d);
        printf("Em percentual: 10 %%\n");
    }
    else if (s>=1200.01 && s<=2000)
    {
        g=(s*0.07+s);
        printf("Novo salario: %.2lf\n",g);
        h=(s*0.07);
        printf("Reajuste ganho: %.2lf\n", h);
        printf("Em percentual: 7 %%\n");
    }
    else if (s>2000)

    {
        i=(s*0.04+s);
        printf("Novo salario: %.2lf\n",i);
        j=(s*0.04);
        printf("Reajuste ganho: %.2lf\n", j);
        printf("Em percentual: 4 %%\n");
    }



    return 0;
}
