#include<stdio.h>
int main()
{
    int n,i; 
    float X,Y,s;
    scanf("%d", &n);
    for (i=0;i<n; i++)
    {
        scanf("%f%f", &X, &Y);
        if (Y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            s=X/Y;
            printf("%.1f\n", s);
        }
    }
    return 0;
}
