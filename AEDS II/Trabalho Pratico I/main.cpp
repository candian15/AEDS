#include <iostream>
#include <string.h>
#include<stdbool.h>


using namespace std;

const int MAX = 100;
int N = 0;
int A = 0, B = 0, C = 0, P = 0;

class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    void setDia(int dia)
    {
        this->dia = dia;
    }

    void setMes(int mes)
    {
        this->mes = mes;
    }

    void setAno(int ano)
    {
        this->ano = ano;
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

    bool dataValida(int dia, int mes, int ano)
{
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12)
    {
        return false;
    }


    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
    {
        return false;
    }


    if (mes == 2)
    {
        bool bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
        if ((bissexto && dia > 29) || (!bissexto && dia > 28))
        {
            return false;
        }
    }

    return true;
}

    void setData(int dia, int mes, int ano)
    {
        this->setDia(dia);
        this->setMes(mes);
        this->setAno(ano);
    }

   void leiaData()
{
    bool dataValida = false;
    while (!dataValida)
    {
        printf("\nData [dd/mm/aaaa]: ");
        scanf("%d/%d/%d", &dia, &mes, &ano);
        getchar();
        dataValida = this->dataValida(dia, mes, ano);
        if (!dataValida)
        {
            printf("Data inválida! Por favor, insira uma nova data.\n");
        }
    }
    setData(dia, mes, ano);
}
    void escrevaData()
    {
        printf("%i/%i/%i\n", getDia(), getMes(), getAno());
    }
};

class Pessoa
{
private:
    string nome;
    Data *nascimento;

public:
    int mesNiver;

    ~Pessoa(){

      }
    Pessoa()
    {
        this->nascimento = new Data();
    }
    void escrevaPessoa()
    {
        this->escrevaNome();
        this->escrevaData();

    }

    void escrevaData()
    {
        nascimento->escrevaData();
    }

    void setNascimento()
    {
        nascimento->leiaData();
        mesNiver = nascimento->getMes();
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    string getNome()
    {
        return this->nome;
    }

    void lerNome()
    {
        printf("\ndigite o nome: ");
        cin.ignore();
        getline(cin,this->nome);

    }

    void escrevaNome()
    {
        cout << this->nome << endl;
    }
};

class Aluno : public Pessoa
{
private:
    int matricula;

public:

    ~Aluno()
    {
        A--;
    }
    void escrevaPessoa()
    {
        this->escrevaNome();
        this->escrevaData();
        cout << matricula;

    }
    void setMatricula(int matricula)
    {
        this->matricula = matricula;
    }

    int getMatricula()
    {
        return this->matricula;
    }

    void leiaMatricula()
    {
        printf("\nDigite a matricula: ");
        scanf("%d", &matricula);
        getchar();
    }

    void escrevaMatricula()
    {
        printf("%i\n ", getMatricula());
    }
};

class Professor : public Pessoa
{
private:
    string titulacao;

public:
    ~Professor()
    {
        P--;
    }
    void escrevaPessoa()
    {
        this->escrevaNome();
        this->escrevaData();
        cout << titulacao;
    }
    void setTitulacao(string titulacao)
    {
        this->titulacao = titulacao;
    }

    string getTitulacao()
    {
        return this->titulacao;
    }

    void lerTitulacao()
    {
        printf("\ndigite a titulacao: ");
        cin >> this->titulacao;
    }

    void escrevaTitulacao()
    {
        cout << this->titulacao << endl;
    }
};

int menu()
{
    int op;

    do
    {
        puts("\nMENU DAS OPCOES\n\n");
        puts("0 - SAIR");
        puts("1 - CADASTRAR ALUNO");
        puts("2 - CADASTRAR PROFESSOR");
        puts("3 - LISTAR ALUNO");
        puts("4 - LISTAR PROFESSOR");
        puts("5 - LISTAR TODOS ANIVERSARIANTES DO MES");
        printf("\nSua opção: ");
        scanf("%i", &op);

    } while (op < 0 || op > 5);

    return op;
}

void listarAniversariantesMes(Aluno *aluno[],Professor *professor[], int mesNiver)
{
    for (int i = 0; i < A; i++)
    {
        if (aluno[i]->mesNiver == mesNiver)
        {
            aluno[i]->escrevaPessoa();
            cout << endl;

        }
    }
      for (int i = 0; i < P; i++)
    {
        if (professor[i]->mesNiver == mesNiver)
        {
            professor[i]->escrevaPessoa();
                        cout << endl;


        }
    }
}

void listaAluno(Aluno *aluno[])
{
    for (int i = 0; i < A; i++)
    {
        aluno[i]->escrevaNome();
        aluno[i]->escrevaData();
        aluno[i]->escrevaMatricula();
    }
}

void novaData(Data *data[])
{
    if (N < MAX)
    {
        data[N] = new Data();
        data[N]->leiaData();
        N++;
    }
    else
    {
        printf("\nLIMITE ATINGIDO!");
    }
}

void novaPessoa(Pessoa *pessoa[])
{
    try {
    pessoa[C] = new Pessoa();
    pessoa[C]->lerNome();
    pessoa[C]->setNascimento();
    C++;
    }
    catch(exception& e) {
        cout << "exception capturada" << e.what();
    }

}

void novoAluno(Aluno *aluno[])
{
    try {
    aluno[A] = new Aluno();
    aluno[A]->lerNome();
    aluno[A]->setNascimento();
    aluno[A]->leiaMatricula();
    A++;

    }
    catch(exception& e) {
        cout << "exception capturada" << e.what();
    }
}

void novoProfessor(Professor *professor[])
{
     try {
    professor[P] = new Professor();
    professor[P]->lerNome();
    professor[P]->setNascimento();
    professor[P]->lerTitulacao();
    P++;
     }
     catch(exception& e) {
        cout << "exception capturada" << e.what();
    }
}

void listaProfessor(Professor *professor[])
{
    for (int i = 0; i < P; i++)
    {
        professor[i]->escrevaNome();
        professor[i]->escrevaData();
        professor[i]->escrevaTitulacao();
    }
}

int escrevaMesNiv()
{
    int mesNiver;
    printf("\nDigite o mês para saber os aniversariantes: ");
    scanf("%d", &mesNiver);

    return mesNiver;
}



int main()
{
    Pessoa *pessoa[MAX];
    Data *data[MAX];
    Aluno *aluno[MAX];
    Professor *professor[MAX];
    int opcao = 0;
    int mesNiver;

    do
    {
        opcao = menu();
        switch (opcao)
        {
        case 0:
            puts("\nObrigado!");
            break;
        case 1:
            novoAluno(aluno);
            break;
        case 2:
            novoProfessor(professor);
            break;
        case 3:
            listaAluno(aluno);
            break;
        case 4:
            listaProfessor(professor);
            break;
        case 5:
             mesNiver = escrevaMesNiv();
            listarAniversariantesMes(aluno,professor, mesNiver);

            break;
        }
    } while (opcao != 0);

    return 0;
}
