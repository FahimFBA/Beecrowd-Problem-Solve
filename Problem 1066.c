#include<stdio.h>
int main()
{
    int i, p=0,n=0,e=0,o=0,x;
    for(i=1; i<=5;i++)
    {
        scanf("%d", &x);
        if(x%2==0)

            e++;

        else
                   o++;

        if(x>0)

            p++;

        else if(x<0)

            n++;



    }
    printf("%d valor(es) par(es)\n", e);
            printf("%d valor(es) impar(es)\n", o);
            printf("%d valor(es) positivo(s)\n", p);
            printf("%d valor(es) negativo(s)\n", n);
    return 0;
}
