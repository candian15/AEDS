#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,N,M_i,usou,sobrou,pmes;
    do{
        scanf("%i", &X);
        pmes=X;
    }while(X<1 || X > 100);
    do{
        scanf("%i", &N);
    }while(N<1 || N > 100);
    for(int i = 0; i<N; i++)
    {
        scanf("%i", &usou);
        sobrou= pmes - usou;
       pmes= sobrou + X;
    }
printf("%i",pmes);
    return 0;
}
