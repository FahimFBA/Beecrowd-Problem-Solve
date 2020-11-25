#include <stdio.h>
#include <math.h>

int main()
{
    int n,a;
    scanf("%d" , &n);
    for (a=1;a<=n;a++)
    {
        if(n%a==0)
        {printf("%d\n", a);}
    }
	return 0;
}
