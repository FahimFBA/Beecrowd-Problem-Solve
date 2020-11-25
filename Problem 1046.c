#include <stdio.h>

int main()

{

    int strtTm, endTm, durationTm;

    scanf("%d %d", &strtTm, &endTm);

    durationTm = endTm - strtTm;

    if (durationTm < 0)

    {

        durationTm = 24 + (endTm - strtTm);

    }

    if (strtTm == endTm)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", durationTm);



    return 0;

}