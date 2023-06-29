#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("teste.dat", "w");
    fprintf(arq,"%i\n", 90);
    fprintf(arq,"%i\n", 95);
    int NOTA;
    for(int i =0; i<3;i++)
    {
        printf("\n nota:");
        scanf("%i", &NOTA);
        fprintf(arq,"%i\n",NOTA);
    }
    fclose(arq);
   int SOMA=0,c=0;
    arq = fopen("teste.dat","r");
   if(arq!=NULL)
    {
        fscanf(arq,"%i",&NOTA);
        while(!feof(arq))
        {
            printf("\n%i",NOTA);
           fscanf(arq,"%i",&NOTA);

        }
    }
    return 0;
}
