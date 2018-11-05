#include "../include/Classes.h"
//Empregado recebe NOME, IDADE ,DATA DE NASCIMENTO, CPF ,ID, DATA EMPRESA, TITULO DO SETOR , AS TRES PROFISSOES QUE O SETOR PERMITE, CARGO DO EMPREGADO E SEU SALARIO, Checa se a profissao eh uma das profissoes possiveis da empresa
DiretordeOperacoes::DiretordeOperacoes(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3,string Emprego, string cargo, double salario,vector<string> profissoes):Empregado(nome,idade,dataNasc,CPF,ID,dataEmpresa,titulo,prof1,prof2,prof3,cargo,salario)
{
    Setprofissao(Emprego,profissoes);

}

DiretordeOperacoes::~DiretordeOperacoes()
{
    //dtor
}
int DiretordeOperacoes::CheckProfissao(vector<string> val) // Checa se a profissao eh permitida na empresa
{
    int check = 0;                          // Se a checagem for 0 significa que a profissao nao consta na lista de profissoes possiveis
        for(int i=0;i<val.size();i++)       //compara com todas as possiveis
        {
            if(val[i]==profissao)
            {
                check=1;
            }
        }
        return check;                       // Se retornar 1 significa que a profissao consta na lista

}

void DiretordeOperacoes::Setprofissao(string val, vector<string> val2)
{
    profissao = val;            //Passa o valor para profissao
    if(CheckProfissao(val2)!=1) //Checa se a profissao passada consta na lista
    {
        cout << "Profissao passada como parametro invalida. Digite uma profissao valida (permitida em qualquer setor). Falha ao criar" << endl; //Caso nao conste avisa
        this->~DiretordeOperacoes(); // Destroi o objeto
    }
}
