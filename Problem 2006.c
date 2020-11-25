#include<stdio.h>
int main()
{
    int a,b,c,d,e,count,m;
    while(scanf("%d",&m)!=EOF){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        count=0;
        if(m==a)count++;
        if(m==b)count++;
        if(m==c)count++;
        if(m==d)count++;
        if(m==e)count++;
        printf("%d\n",count);
    }
    return 0;
}