#include<stdio.h>
int main()
{
    int n,i,a=1;
    scanf("%d",&n);
    for(i = n;i >= 1;i--){
        a = a * i;
    }
    printf("%d\n",a);
    return 0;
}
