#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,A,B,c;
    int aux;

        do
        {
            scanf("%i", &M);
        }
        while(M<40 && M>100);
        do
        {
            scanf("%i", &A);
        }
        while(A<=1 && A>M );
        do
        {
            scanf("%i", &B);

        }
        while(B<=1 && B>M);

        aux = A + B;
        c= M- aux;

            printf("%i ", c);



    return 0;
}
