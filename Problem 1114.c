#include<stdio.h>
int main()
{
    int i,x,y;
    for(i=0;i<100;i++){
        scanf("%d",&x);
        if(x==2002)printf("Acesso Permitido\n");
            else printf("Senha Invalida\n");
        if(x==2002)break;
    }
    return 0;
}
