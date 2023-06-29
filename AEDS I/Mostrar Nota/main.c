#include <stdio.h>
#include <stdlib.h>




int main()
{
    printf("\n testando matrizes\n");

    float NOTAS[3][2];

    NOTAS[0][0]=9;
    NOTAS[0][1]=2;

    NOTAS[1][0]=7;
    NOTAS[1][1]=6;

    NOTAS[2][0]=8;
    NOTAS[2][1]=4;

    for(int i =0; i <3;i++)
{

     for(int j =0; j <2; j++)
        {
        printf("%.f\t", NOTAS[i][j]);
        }
        printf("\n");
}
    return 0;
}//fim main


