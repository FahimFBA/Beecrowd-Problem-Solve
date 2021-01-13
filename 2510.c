#include<stdio.h>
#include<string.h>
int main() 
{
    int t, i, len;
    char str[50];
    scanf("%d",&t);
    for (i=0; i<t ; i++)
    {
        scanf("%s" , &str);
        len=strlen(str); // checking the length of the string
 
        if (len>=0 && len<= 25) // conditions
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

}