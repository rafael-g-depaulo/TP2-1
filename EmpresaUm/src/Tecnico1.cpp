#include "../include/Classes.h"

EmpresaUm::Tecnico::Tecnico(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3):Empregado(nome,idade,dataNasc, CPF,ID, dataEmpresa,titulo,prof1,prof2,prof3, "Tecnico", 3000)
{               //Empregado recebe NOME, IDADE ,DATA DE NASCIMENTO, CPF ,ID, DATA EMPRESA, TITULO DO SETOR , AS TRES PROFISSOES QUE O SETOR PERMITE, CARGO DO EMPREGADO E SEU SALARIO, Tecnico inicializa o vale transporte
    Setvale_transporte(350);
}

EmpresaUm::Tecnico::~Tecnico()
{
    //dtor
}
