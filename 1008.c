#include<stdio.h>
int main()
{
    int A, B;
    float H, SALARY;
    scanf("%d%d", &A, &B);
    scanf("%f", &H);
    printf("NUMBER = %d\n",A);
    SALARY=H*B;
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
