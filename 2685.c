#include <stdio.h>

int main()
{
    int x;
    while(scanf("%d", &x) != EOF)
    {
        x %= 360;
        if(x<90 && x>=0)
            printf("Bom Dia!!\n");
        else if(x>=90 && x<180)
            printf("Boa Tarde!!\n");
        else if(x>=180 && x<270)
            printf("Boa Noite!!\n");
        else if(x>=270 && x<360)
            printf("De Madrugada!!\n");
    }
    return 0;
}