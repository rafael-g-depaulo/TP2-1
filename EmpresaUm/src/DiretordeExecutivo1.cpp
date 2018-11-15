#include "../include/Classes.h"
//Identica a inicializacao do Diretor de Operacao
EmpresaUm::DiretordeExecutivo::DiretordeExecutivo(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3,string Emprego, string cargo, double salario,vector<string> profissoes):DiretordeOperacoes(nome,idade,dataNasc,CPF,ID,dataEmpresa,titulo,prof1,prof2,prof3,Emprego,cargo,salario,profissoes)
{
    //ctor
}

EmpresaUm::DiretordeExecutivo::~DiretordeExecutivo()
{
    //dtor
}
