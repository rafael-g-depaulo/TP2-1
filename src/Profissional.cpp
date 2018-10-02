#include "Classes.h"

Profissional::Profissional(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3,string Emprego, string cargo, double salario):Empregado(nome,idade,dataNasc, CPF,ID, dataEmpresa,titulo,prof1,prof2,prof3, cargo, salario)
{
    SetProfissao(Emprego);  // //Empregado recebe NOME, IDADE ,DATA DE NASCIMENTO, CPF ,ID, DATA EMPRESA, TITULO DO SETOR , AS TRES PROFISSOES QUE O SETOR PERMITE, CARGO DO EMPREGADO E SEU SALARIO e Profissional inicializa a Profissao
}

Profissional::~Profissional() // Destrutor
{

}


void Profissional::SetProfissao(string val) // Recebe a profissao de parametro
{
    int check = 1;
    while(check!=0)
    {
        if(pertence->ChecarCargo(val)==0 )      // Checa se eh uma profissao permitida
        {
        Profissao = val;                        // se for ela atualiza a variavel
        check = 0;
        }
        else    // Se nao for da um aviso e destroi o objeto
        {
            cout << "A profissao passada como parametro nao consta na lista de profissoes permitidas para o setor que o funcionario faz parte." << endl;
            cout << "Para o setor atual do empregado as profissoes possiveis sao : " << pertence->getprofissao1() << " " << pertence->getprofissao2() <<" " << pertence->getprofissao3() <<  endl;
            cout << " O objeto nao sera criado" << endl;

            this->~Profissional();
        }

    }
}


