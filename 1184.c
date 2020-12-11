#include<stdio.h>
int main()
{
    double N[12][12],sum;
    char c[2];
    scanf("%s",&c);
    int n=1;
  
    int i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    for(i = 1;i < 12;i++){
        for(j = 0;j < n; j++){
            sum += N[i][j];
        }
       n++;
    }
    if(c[0]=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/66.0);
    return 0;
}