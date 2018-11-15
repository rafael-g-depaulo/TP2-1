#include "./EmpresaUm/include/Classes.h"
#include "./EmpresaDois/include/Classes.h"

using namespace EmpresaDois;

bool transferirEmpregado(EmpresaUm::Empresa& emp1, EmpresaDois::Empresa& emp2, string idEmpregado) {
  bool achouEmpregado = false;
  EmpresaUm::Empregado empregado;

  string nome         = empregado.Getnome();
  string idade        = empregado.Getidade();
  string dataNasc     = empregado.GetdataNasc();
  string CPF          = empregado.Getcpf();
  string ID           = empregado.Getid();
  string dataEmpresa  = empregado.GetdataEntradaEmpresa();
  string titulo       = empregado.pertence->getTitulo();
  string prof1        = empregado.pertence->getprofissao1();  
  string prof2        = empregado.pertence->getprofissao2();
  string prof3        = empregado.pertence->getprofissao3();
  string cargo        = empregado.Getcargo();
  float salario       = empregado.Getsalario();

  EmpresaDois::Empregado empregadoCopia (nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, cargo, salario);

// procurar pelo empregado no setor de finanças, e colocar ele em emp2 se ele estiver no setor
  if (!achouEmpregado)
    for (auto temp : emp1.financas.Auxiliares)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.financas.Auxiliares.push_back(
        Auxiliar(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.financas.Profissionais)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.financas.Profissionais.push_back(
        Profissional(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.financas.Tecnicos)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.financas.Tecnicos.push_back(
        Tecnico(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );      
    }
  if (!achouEmpregado)
    for (auto temp : emp1.financas.Diretor)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.financas.Diretor.push_back(
        DiretordeSetor(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }
// procurar pelo empregado no setor de marketing
  if (!achouEmpregado)
    for (auto temp : emp1.marketing.Auxiliares)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.marketing.Auxiliares.push_back(
        Auxiliar(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.marketing.Profissionais)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.marketing.Profissionais.push_back(
        Profissional(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.marketing.Tecnicos)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.marketing.Tecnicos.push_back(
        Tecnico(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );  
    }
  if (!achouEmpregado)
    for (auto temp : emp1.marketing.Diretor)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.marketing.Diretor.push_back(
        DiretordeSetor(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );     
    }
// procurar pelo empregado no setor de tecnologia
  if (!achouEmpregado)
    for (auto temp : emp1.tecnologia.Auxiliares)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.tecnologia.Auxiliares.push_back(
        Auxiliar(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );      
    }
  if (!achouEmpregado)
    for (auto temp : emp1.tecnologia.Profissionais)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.tecnologia.Profissionais.push_back(
        Profissional(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.tecnologia.Tecnicos)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.tecnologia.Tecnicos.push_back(
        Tecnico(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.tecnologia.Diretor)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.tecnologia.Diretor.push_back(
        DiretordeSetor(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }
// procurar pelo empregado no setor de normatividade
  if (!achouEmpregado)
    for (auto temp : emp1.normatividade.Auxiliares)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.normatividade.Auxiliares.push_back(
        Auxiliar(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.normatividade.Profissionais)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.normatividade.Profissionais.push_back(
        Profissional(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.normatividade.Tecnicos)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.normatividade.Tecnicos.push_back(
        Tecnico(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.normatividade.Diretor)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.normatividade.Diretor.push_back(
        DiretordeSetor(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }
// procurar pelo empregado no setor de design
  if (!achouEmpregado)
    for (auto temp : emp1.design.Auxiliares)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.design.Auxiliares.push_back(
        Auxiliar(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.design.Profissionais)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.design.Profissionais.push_back(
        Profissional(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.design.Tecnicos)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      emp2.design.Tecnicos.push_back(
        Tecnico(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3)
      );
    }
  if (!achouEmpregado)
    for (auto temp : emp1.design.Diretor)
    if (temp.Getid() == idEmpregado) {
      achouEmpregado = true;
      empregado = temp;
      string emprego = temp.getProfissao();
      emp2.design.Diretor.push_back(
        DiretordeSetor(nome, idade, dataNasc, CPF, ID, dataEmpresa, titulo, prof1, prof2, prof3, emprego, cargo, salario)
      );
    }

// se o empregado não for achado, retornar false
  if (!achouEmpregado)
    return false;

// agora o empregado foi achado. remover ele de emp1 e colocar ele em emp2
  emp1.DemitirEmpregado(idEmpregado);
  return true;
}