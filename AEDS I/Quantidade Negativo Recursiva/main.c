#include <stdio.h>
#include <stdlib.h>
int qtdeNegativosR(float V[],int N);
void inverterec(float V[], int N);
void escreve(float V[], int N);

int main()
{
  float A[]={10,20,-30,40,50};
  printf("\n há %i negativos",qtdeNegativosR(A,5));
  inverterec(A,5);
  escreve(A,5);
    return 0;
}

int qtdeNegativosR(float V[],int N)
{
    int negativos = 0;
    int neg = 0;

   if(N>0)
    {
        if(V[N-1]<0)
        {
        neg=1;
        }
        negativos= neg + qtdeNegativosR(V,N-1);
    }

    return negativos;
}

void inverte( float V[], int i, int j)
{
    float aux;
    if(i<j)
    {
        aux=V[i];
        V[i]=V[j];
        V[j]=aux;
        inverte(V, i+1, j-1);
    }
}

void escreve(float V[], int N)
{
    for(int i = 0;i <N; i++)
        {
        printf(" %.f, ",V[i]);
        }
}
void inverterec(float V[], int N)
{
    inverte(V,0,N-1);
}
