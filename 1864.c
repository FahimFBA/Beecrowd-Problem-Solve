#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    char array[4000]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("%c", array[i]);
    }
    printf("\n");

	return 0;
}
