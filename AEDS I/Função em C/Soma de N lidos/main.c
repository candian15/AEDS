#include <stdio.h>
#include <stdlib.h>

void apresentacao()
{

puts("\n soma de 2 numeros\n");

}//fim apresentacao()
float leia()
{
    float X;
    printf("\n digite valor: ");
    scanf("%f", &X);

    return X;
}//fim leia()

float somareais(float A, float B)
{
    float soma;
    soma = A +  B;

    return soma;
}// fim somareais()

void resultado(float soma, float A, float B)
{
    printf("\n %.f + %.f = %.f", A, B, soma);
}


int main()
{
    apresentacao();
    float A;
    A = leia();
    float B;
    B = leia();
    float soma;
    soma =somareais(A,B);
    resultado(soma,A,B);
    return 0;
}

