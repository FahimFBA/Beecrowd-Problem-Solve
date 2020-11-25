#include<stdio.h>
int main()
{
    int t,i;
    int x;
    int a=0,b=0,c=0,d=0;
    scanf("%d" , &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d" , &x);

        if(x%5==0) a++;
        if(x%2==0) b++;
        if(x%3==0) c++;
        if(x%4==0) d++;
    }
    printf("%d Multiplo(s) de 2\n", b);
    printf("%d Multiplo(s) de 3\n", c);
    printf("%d Multiplo(s) de 4\n", d);
    printf("%d Multiplo(s) de 5\n", a);
    return 0;
}
