#include<stdio.h>
int main()
{
    int x,y,i,n, z,sum=0;
    scanf("%d%d", &x, &y);
    if(x>y)
    {
        z=y; y=x; x=z;
    }
    if(x%2==0)
    {
        x++;
        n=x;
    }
    else
    {
        n=x+2;
    }
    for(i=n;i<y; i=i+2)
    {
        sum=sum+i;
    }
    printf("%d\n", sum);
    return 0;
}
