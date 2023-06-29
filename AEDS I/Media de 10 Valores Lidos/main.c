#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    float x, soma = 0;
     for( ; i <=10; i++)
    {
        printf("\n digite o valor: ");
        scanf("%f" , &x );
        soma = soma + x;


    }//fim for
    float media = soma/10;
    printf("\n media:%.f",media);
    return 0;
}
