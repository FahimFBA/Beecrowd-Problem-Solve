#include<stdio.h>
int main()
{
    int i,j,n,x,k;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        k=0;
        scanf("%d", &x);
        if (x<4)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            for(j=2;j<x;j++)
            {
                if(x%j==0)
                {
                    k=1;
                    break;
                }
                else
                {
                    k=2;
                }
            }
            if(k==1)
            {
                printf("%d nao eh primo\n", x);
            }
            else if (k==2)
            {
                printf("%d eh primo\n", x);
            }
        }

    }
    return 0;
}
