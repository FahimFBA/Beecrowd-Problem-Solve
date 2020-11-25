#include <stdio.h>
int main()
{
    int A,B,C,D,Y,Z;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    Y=C+D;
    Z=A+B;
    if ((B>C)&&(D>A)&&(Y>Z)&&(C>0)&&(D>0)&&(A%2==0))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
