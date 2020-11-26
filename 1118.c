#include<stdio.h>
int main()
{
    int x,j=0;
    double  n,N[2], avg;
    while(1) {while(1)
    {
        scanf("%lf", &n);
        if(n>=0 && n<=10)
        {
            N[j]=n;
            j++;
        }
        else
            printf("nota invalida\n");
        if(j>1) break;
    }
    avg= (N[0]+N[1])/2;
    printf("media = %.2lf\n", avg);
    j=0;
    while(1)
    {
        scanf("%d", &x);
        printf("novo calculo (1-sim 2-nao)\n");
        if(x==1 || x==2) break;

    }
    if (x==1) continue;
    else break;}

    return 0;
}
