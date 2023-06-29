#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
   puts("\n maximo e minimo");
   bool erro;
   int N;


   do{
    printf("\n digite qntd: ");
    scanf("%i", &N );
    erro= N < 1;
    if(erro) puts("\n\a valor invalido!");
   }while(erro);



   float X, maior, menor;

   printf("\n digite 1.o valor: ");
   scanf("%f" , &X);


   for( int i=1;  i<= N-1; i++ )
   {
       printf("\n digite %i.o valor: ", (i + 1));
       scanf("%f", &X);

           if( X > maior) maior = X;
           if( X < menor) menor = X;

   } //fim for


   printf("\n maior= %.f menor= %.f", maior, menor);




    return 0;
}
