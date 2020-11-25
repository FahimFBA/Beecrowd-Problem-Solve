#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0;
    char O[2];
    scanf("%s",&O);
    int n=11,o=6,i,j;
    for(i = 0;i < 6;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&M[i][j]);
            if(j > n)sum += M[i][j];
        }
        n--;
    }
    for(i = 6;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&M[i][j]);
            if(j > o)sum += M[i][j];
        }
        o++;
    }
    if (O[0]=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30.0);
    return 0;
}