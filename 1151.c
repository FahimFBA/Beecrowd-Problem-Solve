#include <stdio.h>

int main()
 {

     int i, N, t1 = 0, t2 = 1, n;

      scanf("%d",&N);

     if(N>0 && N<46)
     {
       for (i = 1; i <= N; ++i)
        {
           printf("%d", t1);
           if (i!=N) printf(" ");
           n=t1 + t2;
           t1 = t2;
          t2 =n;
        }
    }
    printf("\n");

    return 0;

}