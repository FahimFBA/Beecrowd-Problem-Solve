#include<stdio.h>
int main()
{
    int a,j,b,i,k,n,x=0;
    scanf("%d",&n);
    int ar[n];
    for(i =0;i < n;i++){
    scanf("%d %d", &a, &b);
    if (a > b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (a%2==0)a--;
    a = a + 2;
    for (j = a;j < b;j=j+2){
            x = x + j;
    }
    ar[i]=x;
    x = 0;
    }
    for(i = 0;i < n;i++){
        printf("%d\n",ar[i]);
    }

    return 0;
}