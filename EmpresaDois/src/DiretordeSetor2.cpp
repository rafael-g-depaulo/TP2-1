#include "../include/Classes.h"

namespace EmpresaDois {
  EmpresaDois::DiretordeSetor::DiretordeSetor(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3,string Emprego, string cargo, double salario):Profissional(nome,idade,dataNasc, CPF,ID, dataEmpresa,titulo,prof1,prof2,prof3,Emprego, cargo, salario)
  {                   // Identico ao profissional  pois o Diretor de setor deve ser um profissional
      //ctor          // A unica diferenca alem do valor de variaveis eh ter o metodo receber bonus
  }

  EmpresaDois::DiretordeSetor::~DiretordeSetor()
  {
      //dtor
  }

}