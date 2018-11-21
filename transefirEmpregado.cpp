#include "./EmpresaUm/include/Classes.h"
#include "./EmpresaDois/include/Classes.h"

using namespace EmpresaDois;

bool transferirEmpregado(EmpresaUm::Empresa& emp1, EmpresaDois::Empresa& emp2, string idEmpregado) {
  bool achouEmpregado = false;
  EmpresaUm::Empregado empregado;

  //coloca os setores das empresas em vectors
  vector<vector<EmpresaUm::Auxiliar>> setoresA;
  vector<vector<EmpresaUm::Profissional>> setoresP;
  vector<vector<EmpresaUm::Tecnico>> setoresT;
  vector<vector<EmpresaUm::DiretordeSetor>> setoresD;
  setoresA.push_back(emp1.financas.Auxiliares);
  setoresP.push_back(emp1.financas.Profissionais);
  setoresT.push_back(emp1.financas.Tecnicos);
  setoresD.push_back(emp1.financas.Diretor);
  setoresA.push_back(emp1.marketing.Auxiliares);
  setoresP.push_back(emp1.marketing.Profissionais);
  setoresT.push_back(emp1.marketing.Tecnicos);
  setoresD.push_back(emp1.marketing.Diretor);
  setoresA.push_back(emp1.tecnologia.Auxiliares);
  setoresP.push_back(emp1.tecnologia.Profissionais);
  setoresT.push_back(emp1.tecnologia.Tecnicos);
  setoresD.push_back(emp1.tecnologia.Diretor);
  setoresA.push_back(emp1.normatividade.Auxiliares);
  setoresP.push_back(emp1.normatividade.Profissionais);
  setoresT.push_back(emp1.normatividade.Tecnicos);
  setoresD.push_back(emp1.normatividade.Diretor);
  setoresA.push_back(emp1.design.Auxiliares);
  setoresP.push_back(emp1.design.Profissionais);
  setoresT.push_back(emp1.design.Tecnicos);
  setoresD.push_back(emp1.design.Diretor);

  vector<vector<EmpresaDois::Auxiliar>> setoresA2;
  vector<vector<EmpresaDois::Profissional>> setoresP2;
  vector<vector<EmpresaDois::Tecnico>> setoresT2;
  vector<vector<EmpresaDois::DiretordeSetor>> setoresD2;
  setoresA2.push_back(emp2.financas.Auxiliares);
  setoresP2.push_back(emp2.financas.Profissionais);
  setoresT2.push_back(emp2.financas.Tecnicos);
  setoresD2.push_back(emp2.financas.Diretor);
  setoresA2.push_back(emp2.marketing.Auxiliares);
  setoresP2.push_back(emp2.marketing.Profissionais);
  setoresT2.push_back(emp2.marketing.Tecnicos);
  setoresD2.push_back(emp2.marketing.Diretor);
  setoresA2.push_back(emp2.tecnologia.Auxiliares);
  setoresP2.push_back(emp2.tecnologia.Profissionais);
  setoresT2.push_back(emp2.tecnologia.Tecnicos);
  setoresD2.push_back(emp2.tecnologia.Diretor);
  setoresA2.push_back(emp2.normatividade.Auxiliares);
  setoresP2.push_back(emp2.normatividade.Profissionais);
  setoresT2.push_back(emp2.normatividade.Tecnicos);
  setoresD2.push_back(emp2.normatividade.Diretor);
  setoresA2.push_back(emp2.design.Auxiliares);
  setoresP2.push_back(emp2.design.Profissionais);
  setoresT2.push_back(emp2.design.Tecnicos);
  setoresD2.push_back(emp2.design.Diretor);

  //para cada setor, procura o funcionário, se encontrar, contrata na empresa dois
  for(unsigned int i = 0; i < setoresA.size(); i++){
    if(achouEmpregado) break;
    for(auto temp : setoresA[i]){
      if(temp.Getid() == idEmpregado){
        achouEmpregado = true;
        empregado = temp;
        unsigned int j; for(j = 0; j < setoresA2.size(); j++);
        setoresA2[j].push_back(Auxiliar(
          empregado.Getnome(),
          empregado.Getidade(),
          empregado.GetdataNasc(),
          empregado.Getcpf(),
          empregado.Getid(),
          empregado.GetdataEntradaEmpresa(),
          empregado.pertence->getTitulo(),
          empregado.pertence->getprofissao1(),
          empregado.pertence->getprofissao2(),
          empregado.pertence->getprofissao3()
        ));
      }
    }
  }
  for(unsigned int i = 0; i < setoresP.size(); i++){
    if(achouEmpregado) break;
    for(auto temp : setoresP[i]){
      if(temp.Getid() == idEmpregado){
        achouEmpregado = true;
        empregado = temp;
        unsigned int j; for(j = 0; j < setoresP2.size(); j++);
        setoresP2[j].push_back(Profissional(
          empregado.Getnome(),
          empregado.Getidade(),
          empregado.GetdataNasc(),
          empregado.Getcpf(),
          empregado.Getid(),
          empregado.GetdataEntradaEmpresa(),
          empregado.pertence->getTitulo(),
          empregado.pertence->getprofissao1(),
          empregado.pertence->getprofissao2(),
          empregado.pertence->getprofissao3(),
          temp.getProfissao(),
          empregado.Getcargo(),
          empregado.Getsalario()
        ));
      }
    }
  }
  for(unsigned int i = 0; i < setoresT.size(); i++){
    if(achouEmpregado) break;
    for(auto temp : setoresT[i]){
      if(temp.Getid() == idEmpregado){
        achouEmpregado = true;
        empregado = temp;
        unsigned int j; for(j = 0; j < setoresT2.size(); j++);
        setoresT2[j].push_back(Tecnico(
          empregado.Getnome(),
          empregado.Getidade(),
          empregado.GetdataNasc(),
          empregado.Getcpf(),
          empregado.Getid(),
          empregado.GetdataEntradaEmpresa(),
          empregado.pertence->getTitulo(),
          empregado.pertence->getprofissao1(),
          empregado.pertence->getprofissao2(),
          empregado.pertence->getprofissao3()
        ));
      }
    }
  }
  for(unsigned int i = 0; i < setoresD.size(); i++){
    if(achouEmpregado) break;
    for(auto temp : setoresD[i]){
      if(temp.Getid() == idEmpregado){
        achouEmpregado = true;
        empregado = temp;
        unsigned int j; for(j = 0; j < setoresD2.size(); j++);
        setoresD2[j].push_back(DiretordeSetor(
          empregado.Getnome(),
          empregado.Getidade(),
          empregado.GetdataNasc(),
          empregado.Getcpf(),
          empregado.Getid(),
          empregado.GetdataEntradaEmpresa(),
          empregado.pertence->getTitulo(),
          empregado.pertence->getprofissao1(),
          empregado.pertence->getprofissao2(),
          empregado.pertence->getprofissao3(),
          temp.getProfissao(),
          empregado.Getcargo(),
          empregado.Getsalario()
        ));
      }
    }
  }
  
  //caso tenha falhado
  if (!achouEmpregado)
    return false;

// agora o empregado foi achado. remover ele de emp1 e colocar ele em emp2
  emp1.DemitirEmpregado(idEmpregado);
  return true;
}