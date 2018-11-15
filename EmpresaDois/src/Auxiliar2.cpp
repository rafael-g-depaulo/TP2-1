#include "../include/Classes.h"

namespace EmpresaDois {  
  Auxiliar::Auxiliar(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3):Empregado(nome,idade,dataNasc,CPF,ID,dataEmpresa,titulo,prof1,prof2,prof3,"Auxiliar",1500)
  {                                   //Empregado recebe NOME, IDADE ,DATA DE NASCIMENTO, CPF ,ID, DATA EMPRESA, TITULO DO SETOR , AS TRES PROFISSOES QUE O SETOR PERMITE, CARGO DO EMPREGADO E SEU SALARIO perceba que salario e cargo sao fixos, Auxiliar inicializa o vale transporte
  Setvale_transporte(350);
  }

  Auxiliar::~Auxiliar()
  {
      //dtor
  }

}