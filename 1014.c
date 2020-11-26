#include<stdio.h>
int main()
{
    int X;
    float Y, average;
    scanf("%d", &X);
    scanf("%f", &Y);
    average=X/Y;
    printf("%.3f km/l\n", average);
    return 0;
}
