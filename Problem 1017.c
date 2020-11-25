#include<stdio.h>

int main(){



    int time, average;

    float fuel;



     scanf("%d %d", &time, &average);

     fuel = ((time * average) / 12.0);

     printf("%.3f\n", fuel);

     return 0;



}
