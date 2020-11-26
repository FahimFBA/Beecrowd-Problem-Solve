#include <stdio.h>
int main()
{
    int i;
    int c=0;
    double x;
    for(i=0;i<6;i++)
    {
        scanf("%lf", &x);
        if (x>=0)
        {
            c++;
        }


    }
    printf("%d valores positivos\n", c);
    return 0;
}
