#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,n,len,total;
    char str[500];
    scanf("%d" , &t);
    for (j=1; j<=t; j++)
    {
        scanf("%s" , &str);
        len=strlen(str);
        for (i=0,total=0; i<len; i++)
        {
            if(str[i]=='0') total+=6;
            else if(str[i]=='1') total+=2;
            else if(str[i]=='2') total+=5;
            else if(str[i]=='3') total+=5;
            else if(str[i]=='4') total+=4;
            else if(str[i]=='5') total+=5;
            else if(str[i]=='6') total+=6;
            else if(str[i]=='7') total+=3;
            else if(str[i]=='8') total+=7;
            else if(str[i]=='9') total+=6;
        }
        printf("%d leds\n" , total);
    }
}