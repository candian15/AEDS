#include <stdio.h>
#include <stdlib.h>


void apresentacao(int x)
{
    if(x<=5)
    {
    printf("%i ",x);
    apresentacao(x+1);
    printf("%i ",x);
    }
}
int main()
{
   apresentacao(1);
       return 0;
}

