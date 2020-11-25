#include<stdio.h>
int main()
{

    double pi=3.14159, R, value;

    scanf("%lf", &R);


    value=(4/3.0)*pi*R*R*R;
    printf("VOLUME = %.3lf\n", value);
    return 0;
}
