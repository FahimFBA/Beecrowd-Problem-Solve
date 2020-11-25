#include <stdio.h>


int main()
{
    int n,a=1,b=2,c=3,i;
    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
        printf("%d %d %d PUM\n", a, b, c);
        a+=4;
        b+=4;
        c+=4;

    }

    return 0;
}
