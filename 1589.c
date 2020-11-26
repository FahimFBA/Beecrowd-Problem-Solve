#include<stdio.h>
int main()
{
    int n,a,b,i,c;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d", &a, &b);
        c=a+b;
        printf("%d\n" , c);
    }
    return 0;
}
