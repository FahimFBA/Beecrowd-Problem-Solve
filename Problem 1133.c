#include <stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d%d", &a,&b);
    if(a>b)
        {t=a;a=b;b=t;};
    a++;
    for(i=a; i<b;i++)

    {
        if (i%5==2 || i%5==3)
            printf("%d\n", i);
    }

    return 0;
}
