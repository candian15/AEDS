#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define nlin 5
#define ncol 5

//prototipos
float somaColunas(float M[][ncol], int );
bool somasiguaisprimeiraultimacol (float M[][ncol]);
int qtdePositivosAcimaDiagonal(float M[nlin][nlin]);

int main()
{
    float A[][ncol]={1,2,3,4,5 , 6,7,8,9,10 , 11,12,13,14,15 , 16,17,18,19,20 , 21,22,23,24,25};
    if(somasiguaisprimeiraultimacol(A))
    {
        puts("\n a soma da 1.a coluna = soma da ultima coluna.");
    }
    else
    {
        puts("\n a soma da 1.a coluna é diferente da soma da ultima coluna");
    }
    printf("\n ha %i valores positivos acima da diagonal principal", qtdePositivosAcimaDiagonal(A));

    return 0;
}

float somaColunas(float M[][ncol], int coluna)
{
    float soma=0;
    for(int i=0;i<nlin;i++)
    {
        soma+=M[i][coluna];
    }
    return soma;
}

bool somasiguaisprimeiraultimacol (float M[][ncol])
{
    bool iguais = false;
    float somaprimeira = somaColunas(M,0);
    float somaultima = somaColunas(M, ncol -1);
    if(somaprimeira == somaultima)
    {
        bool iguais = true;
    }
    return iguais;
}



int qtdePositivosAcimaDiagonal(float M[nlin][nlin])
{
    int c=0;

    for(int i = 0; i<nlin-1;i++)
    {
        for(int j=i+i;j<nlin;j++)
        {
            if(M[i][j]>0)
            {
                c++;
            }
        }
    }
    return c;
}

