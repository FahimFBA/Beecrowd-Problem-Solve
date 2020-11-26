#include<stdio.h>
int main()
{
    float A, B,C, Z;

    scanf("%f%f%f", &A, &B, &C);
    Z=0.5*A*C;
    printf("TRIANGULO: %.3f\n",Z);
    Z=3.14159*C*C;
    printf("CIRCULO: %.3f\n",Z);
    Z=((A+B)/2)*C;
    printf("TRAPEZIO: %.3f\n",Z);
    Z=B*B;
    printf("QUADRADO: %.3f\n",Z);
    Z=A*B;
    printf("RETANGULO: %.3f\n",Z);
    return 0;
}
