#include "../include/Classes.h"

EmpresaUm::Setor::Setor(){}
EmpresaUm::Setor::Setor(string tit, string prof1, string prof2, string prof3) // Inicializa apenas as profissoes que o setor permite e o nome do setor
{
    setTitulo(tit);
    setProfissao(prof1,prof2,prof3);
}

EmpresaUm::Setor::~Setor()
{
    //dtor
}


int EmpresaUm::Setor::ChecarCargo(string val)
{
    if((val == profissao1 || val == profissao2) || val == profissao3)  // Checa se a string passada eh igual a alguma profissao do setor
    {
        return 0;                                                       // 0 para positivo 1 para negativo. Checa se a profissao eh permitida
    }
    return 1;
}
