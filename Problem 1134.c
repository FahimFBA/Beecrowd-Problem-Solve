#include<stdio.h>
int main()
{
    int x,i;
    int a=0,b=0,c=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d" , &x);
        if(x>=1 && x<=3)
        {
            if(x==1) a++;
            else if(x==2) b++;
            else if(x==3) c++;
        }
        else if(x==4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", b);
    printf("Diesel: %d\n", c);

    return 0;
}
