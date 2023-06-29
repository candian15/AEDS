#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *arq=fopen("string.dat","r");

 if(arq!=NULL)
 {
     int a;
 char frase[100];
while(fgets(frase,100,arq)){

     printf("%s" ,frase);
}

 }else{
  printf("\n Não foi possivel abrir o arquivo!");
     return 0;
 }
 fclose(arq);
     return 0;
}
