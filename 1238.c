#include <stdio.h>
int main()
{
    char Word1[50], Word2[50];
    int test_case, a, b, i, j;
    scanf("%d", &test_case);
    for (i = 0; i < test_case; i++)
    {
        scanf("%s", &Word1);
        scanf("%s", &Word2);
        for (a = 0, b = 0, j = 0; j < 50; j++)
        {
            if (Word1[j] == '\0')
            {
                a = 1;
            }
            if (Word2[j] == '\0')
            {
                b = 1;
            }
            if (a == 1 && b == 1)
            {
                break;
            }
            if (a == 0)
            {
                printf("%c", Word1[j]);
            }
            if (b == 0)
            {

                printf("%c", Word2[j]);
            }
        }
        printf("\n");
    }
}