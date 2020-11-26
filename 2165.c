#include <stdio.h>
#include <string.h>

int main()
{
    char twt[600];
    gets(twt);
    if(strlen(twt)>140)
        printf("MUTE\n");
      else
       printf("TWEET\n");

    return 0;
}