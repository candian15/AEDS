#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P,D1,D2,A=0,B=1,soma;
    do{

        scanf("%i", &P);
    }while(P!= 0 && P!=1);
    do{

        scanf("%i", &D1);
    }while(D1<0 || D1>5);
    do{

        scanf("%i", &D2);
    }while(D2<0 || D2>5);

     soma= D1 + D2;
    if(P==0 && soma%2==0)
    {
        printf("%i",A);
    }else
    {
        if(P==1 && soma%2!=0)
        {
            printf("%i",A);
        }else
        {
            printf("%i",B);
        }
    }
    return 0;
}
