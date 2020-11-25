#include<stdio.h>
int main()
{
    long int a;
    scanf("%ld", &a);
    while(a!=EOF)
    {
        printf("%X\n",a);
        break;
    }
    return 0;
}
