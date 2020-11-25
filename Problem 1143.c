#include<stdio.h>
int main()
{
    int n,i,j=1,k=2,l=3;
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        printf("%d %d %d\n",i,(i*i),(i*i*i));
    }
    return 0;
}