#include <stdio.h>
#include <stdlib.h>
int nlin;
int ncol;
int main()
{
    printf("\n Matrizes");

    printf("\n quantidade de alunos: ");
    scanf("%i", &nlin);
    printf("\n quantidade de provas: ");
    scanf("%i",&ncol);

    float NOTAS[nlin][ncol];
    leianotas(NOTAS);
    listaturma(NOTAS);
    listamedia(NOTAS);

    return 0;
}//fim main

void listaturma(float NOTAS[][ncol])
{
for(int i =0; i < nlin;i++)
{

     for(int j =0; j <ncol; j++)
        {
         printf("%.f\t",NOTAS[i][j]);
        }//fim for (j)
        printf("\n");
}//fim for(i)
}//fim listaturma()

void leianotas(float NOTAS[][ncol])
{

    for(int i=0;i<nlin;i++)
     { printf("\n\n ALUNO %.i:\n",(i+1));

        for (int j = 0; j<ncol ;j++)
        {
           printf("\n %i.a NOTA: ",(j+1));
           scanf("%f.",&NOTAS[i][j]);
        }// fim for (j)
    }//fim for(i)
}//fim leianotas()

void listamedia(float NOTAS[][ncol])
{
    float soma,media;
    for(int i=0; i<nlin; i++)
    {

    soma=0;
    for( int j=0; j<ncol;j++)
    {
    soma=soma+NOTAS[i][j];
    }
    media=soma/ncol;
    printf("\n media= %f",media);
    }
}







