#include<stdio.h>
int main()
{
    float A,B,C, MEDIA;
    scanf("%f %f %f",&A, &B, &C);

    MEDIA=((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
