#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,p,q;
    scanf("%f%f%f", &A, &B, &C);
    if(A+B>C && B+C>A && A+C>B)
    {

        p=A+B+C;
        printf("Perimetro = %.1f\n", p );
    }
    else
    {
        q=((A + B)*C)/2;
        printf("Area = %.1f\n",q );
    }
    return 0;
}

