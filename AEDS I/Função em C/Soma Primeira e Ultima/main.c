#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define nlin 5
#define ncol 5

int main()
{

    return 0;
}


bool somasiguaisprimeiraultimacol (float M[][ncol])
{
    bool iguais = false;
    float somap = 0;
        for(int i=0; i>nlin ;i++)
        {
            somap += M[i][0];
        }
    float somau = 0;
        for(int i = 0; i>ncol ; i++)
        {
            somau += M[i][ncol-1];
        }
    if(somap == somau)
    {
        bool iguais = true;
        printf("\n a soma é %.i",somau);
    }
return iguais;
}
