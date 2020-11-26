#include <stdio.h>
int main()
{
    int X, N, i,b=0;
    scanf("%d %d", &X, &N);
    while(N<=0)
        scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        b=b+X;
        X++;
    }
    printf("%d\n",b);
    return 0;
}
