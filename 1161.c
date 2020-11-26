#include<stdio.h>
int main()
{
    int m ,n ,i;
    long long s[21];
    s[0]=1;
    for (i=1; i<=20; i++)
    {
        s[i]=s[i-1]*i;
    }
    while (scanf("%d",&m)!=EOF)
    {
        scanf("%d" , &n);
        printf("%lld\n" , s[m]+s[n]);
    }
    
    return 0;
}
