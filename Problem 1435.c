#include<stdio.h>
int main()
{
    int i,j,n,x;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                x = i;
                if(j < x)x = j;
                if(n-i+1 < x)x = n-i+1;
                if(n-j+1 < x)x = n-j+1;
                printf("%3d",x);
                if(j < n)printf(" ");
                else printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}