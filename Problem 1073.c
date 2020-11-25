#include<stdio.h>
int main()
{
    int i,n,p;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        if(i%2==0)
        {

        p=i*i;
        printf("%d^2 = %d\n", i, p);
        }



    }


    return 0;
}
