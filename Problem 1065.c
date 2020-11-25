#include <stdio.h>
int main()
{
    int i;
    int c=0;
    int n;
    for(i=1;i<=5;i++)
    {
        scanf("%d", &n);
        if (n%2==0)
        {
            c++;
        }


    }
    printf("%d valores pares\n", c);
    return 0;
}
