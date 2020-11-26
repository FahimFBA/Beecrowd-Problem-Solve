#include <stdio.h>
int main()
{
    int n,a,i,f,k,v,m=1;
    scanf("%d%d", &a, &n);
    k=n/a;
    v=a;
    for(i=1;i<=k;i++)
    {
        printf("%d", m);
        for(f=m+1;f<=v;f++)
            printf(" %d",f);
        printf("\n");
        m+=a;
        v+=a;
    }
    return 0;
}
