#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    char ara[100];
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        scanf("%s",ara);
        scanf("%d", &c);
        if(ara[0]=='T' && ara[1]=='h' && ara[2]=='o' && ara[3]=='r')
            printf("Y\n");
        else printf("N\n");
    }
    return 0;
}