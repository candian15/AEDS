#include <iostream>



const int MAX=3;
 int N=0;
 int valor=0;
class Data
{
    private:
        int dia;
        int mes;
        int ano;

    public:
        void setDia(int dia)
        {
            this->dia=dia;
        }

        void setMes(int mes)
        {
            this->mes=mes;
        }

        void setAno(int ano)
        {
            this->ano=ano;
        }

        int getDia()
        {
            return this->dia;
        }

         int getMes()
        {
            return this->mes;
        }

         int getAno()
        {
            return this->ano;
        }

         void setData(int dia, int mes, int ano)
        {
            this-> setDia(dia);
            this-> setMes(mes);
            this-> setAno(ano);
        }
        void leiaData()
        {
            printf("\n Data[dd/mm/aaaa]: ");
            scanf("%d/%d/%d",&dia,&mes,&ano);

            setData(dia,mes,ano);
        }
        void escrevaData()
        {
            printf("%i/%i/%i\n ", getDia(), getMes(),getAno());
        }
};


 int menu()
{
    int op;

    do{
        puts("\n MENU DAS OPCOES\n\n");
        puts("0 - SAIR");
        puts("1 - CADASTRAR");
        puts("2 - LISTAR DATA");
        printf("\n Sua opção: ");
        scanf("%i", &op);

        }while(op<0 || op>2);
        return op;
}
void listaDatas(Data* data[])
{

    for(int i = 0; i<valor ;i++)
    {
        data[i]->escrevaData();
    }
}

void novaData(Data* data[])
{

    if(N<MAX)
        {

        data[N] = new Data();
        data[N]->leiaData();
        N++;
        }else{
                printf("\n LIMITE ATINGIDO!");
             }

}





int main()
{
    Data* data[MAX];
    int opcao=0;

do{
    opcao = menu();
    switch(opcao)
    {
        case 0: puts("\n Obrigado!");
                break;
        case 1: novaData(data);
                valor++;
                break;
        case 2: listaDatas(data);
                break;

    }
}while(opcao!=0);

    return 0;
}
