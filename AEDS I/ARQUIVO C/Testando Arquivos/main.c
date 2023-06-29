#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void preencerarquivo(char* nome);
void listaArquivo(char* nome);

int main()
{
    printf("\n testando arquivos");
    char nomearq[30];
    printf("\n nome arquivo: ");
    scanf("%s", nomearq);
    preenchearquivo(nomearq);
    listaArquivo(nomearq);
    printf("\n há %i alunos aprovados", qtdeAprovados(nomearq));
    return 0;
}

int qtdeAprovados(char* nome)
{
    int quantidade = 0;
    FILE* F1;
    int NOTA;
    if((F1 = fopen(nome, "r"))!= NULL)
    {
        fscanf(F1,"%i",&NOTA);
        while(!feof(F1))
            {
                if(NOTA>= 60)quantidade++;
                fscanf(F1,"%i",&NOTA);
            }
        fclose(F1);
    }
    return quantidade;
}


void listaArquivo(char* nome)
{
    FILE* F1;
    int NOTA;

    if((F1 = fopen(nome, "r"))!= NULL)
    {
        fscanf( F1 ,"%i", &NOTA);
        while(!feof(F1))
        {
            printf("%i\n",NOTA);
            fscanf( F1 ,"%i", &NOTA);
        }
        fclose(F1);
    }
    else
    {
      puts("\n\a arquivo inexistenta");
    }
}// fim listaArquivo


void preenchearquivo(char* nome)
{
    FILE* F1;
    F1 = fopen(nome, "a");

    int NOTA;
    for(int i = 0; i<5;i++)
    {
        printf("\n digite a nota[0...100]: ");
        scanf("%i", &NOTA);
        fprintf(F1,"%i\n",NOTA);
    }//fim for(i)

    fclose(F1);
}//fim preenchearquivo
