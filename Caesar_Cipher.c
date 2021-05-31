#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, l, t;
    scanf("%d", &t); // test case
    char str[51];
    char converted_str;
    for (i = 0; i < t; i++)
    {
        scanf("%s", str);
        scanf("%d", &j);
        getchar();
        l = strlen(str); // length of the string

        for (k = 0; k < l; k++)
        {
            converted_str = str[k] - j; // shifting
            if (converted_str < 65)     // for wrapping up at the end of the alphabet
            {
                converted_str += 26; // wrapping done for the end part of the alphabet
            }
            printf("%c", converted_str);
        }
        printf("\n");
    }
    return 0;
}