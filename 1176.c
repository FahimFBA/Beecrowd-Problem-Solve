#include <stdio.h>
int main()
{
    int i,j;
    long long y,a,b,c,d,n,x;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
    scanf("%lld",&x);
    a=0;b=1;
    for(j=0;j<=x;j++){
    c=a+b;
    d=a;
    a=b;
    b=c;
   if(j==x){
    y=d;
    break;
   }
    }
    printf("Fib(%lld) = %lld\n",x,y);
    }
    return 0;
}