#include <stdio.h>
int main()
{
    int i,a,b,ab,j=0,k,l,n,x=0,y=0,z=0;
    while(1){
                scanf("%f %f",&k ,&l);
                printf("Novo grenal (1-sim 2-nao)\n");
                j++;
                if(k>l)x++;
                else y++;
                if(k==l)z++;
           scanf("%d",&n);
           if (n==1)continue;
           if (n==2)break;
}
                printf("%d grenais\n",j);
                printf("Inter:%d\n",x);
                printf("Gremio:%d\n",y);
                printf("Empates:%d\n",z);
                if(x>y)printf("Inter venceu mais\n");
                else if(y>x)printf("Gremio venceu mais\n");
                else printf("Não houve vencedor\n");
    return 0;
}