#include<stdio.h>
int main()
{
    int x1, x2, y1, y2;
    float x3, y3, ans;

    scanf("%d%d%f%d%d%f", &x1, &x2, &x3, &y1, &y2, &y3);


    ans=((x2*x3)+(y2*y3));
    printf("VALOR A PAGAR: R$ %.2f\n", ans);
    return 0;
}
