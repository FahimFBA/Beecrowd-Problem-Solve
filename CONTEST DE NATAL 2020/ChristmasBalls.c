#include<stdio.h>
int main()
{
    int ball, need, result, also_need;
    scanf("%d" , &ball);
    scanf("%d" , &need);
    result= (need/2);
    also_need=result-ball;
    if(result<=ball)
    printf("Amelia tem todas bolinhas!\n");
    else
    printf("Faltam %d bolinha(s)\n" , also_need);
}