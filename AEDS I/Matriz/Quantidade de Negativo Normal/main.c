#include <stdio.h>
#include <stdlib.h>

void escreve(float V[], int N);
void inverte( float V[], int N);
qtdeNegativos(float V[], int N);
int main()
{
    float A[]={10,20,30,40,50};
    printf("\n há %i negativos",qtdeNegativos(A,5));
    inverte(A,5);
    escreve(A,5);
    return 0;
}
qtdeNegativos(float V[], int N)
{
    int negativos = 0;
        for(int i=0; i<N;i++)
        {
            if( V[i]<0)
            {
            negativos++;
            }
        }
    return negativos;
}

void inverte( float V[], int N)
{
    float aux;
    int i;
    int j;
    for(i=0, j=N-1;i<j;i++,j--)
    {
        aux=V[i];
        V[i]=V[j];
        V[j]=aux;
    }
}

void escreve(float V[], int N)
{
    for(int i = 0;i <N; i++)
        {
        printf("%.f, ",V[i]);
        }
}
