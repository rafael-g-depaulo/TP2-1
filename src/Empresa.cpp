#include "Classes.h"

Empresa::Empresa():financas("financas","administrador", "contador", "economista")   // Sempre que se constroi uma empresa ela tera esses cinco setores que serao inicializados com seus titulos e as profissoes que
,marketing("marketing","comunicador social", "administrador", "mercadologo")        // eles permitem
,tecnologia("tecnologia","eng. da computacao", "eng. de sistemas" , "eng. da informacao")
,normatividade("normatividade","advocado", "comunicador social","contador")
,design("design","design grafico", "design multimedia", "eng. social")
{
    //Inicializa o vector que guarda todas as profissoes possiveis na empresa. Este Vector eh utilizado para conferir se os diretores de Operacoes e os Diretores Executivos possuem uma formacao valida

    Profissoes.push_back("administrador");              //Cada push_back insere o argumento entre parenteses no fim do Vector
    Profissoes.push_back("contador");
    Profissoes.push_back("economista");
    Profissoes.push_back("comunicador social");
    Profissoes.push_back("mercadologo");
    Profissoes.push_back("eng. da computacao");
    Profissoes.push_back("eng. de sistemas");
    Profissoes.push_back("eng. da informacao");
    Profissoes.push_back("normatividade");
    Profissoes.push_back("advocado");
    Profissoes.push_back("design gráfico");
    Profissoes.push_back("design multimedia");
    Profissoes.push_back("eng. social");


}

Empresa::~Empresa()
{
    //dtor
}
        void Empresa::SetTotaldeFuncionarios()   //Conta quantos empregados cadastrados a empresa tem. Acessa todas as databases que guardam os empregados e conta quantos estao cadastrados
        {
            TotaldeFuncionarios = 0;                                //Zera a quantidade para contar novamente caso algo tenha mudado
            //Conta todos os funcionarios do setor FINANCAS
            for(int i = 0; i<financas.Auxiliares.size();i++)        //Varre os vetores e vai somando cada elemento ou seja funcionario que encontra ao total
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<financas.Tecnicos.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<financas.Profissionais.size();i++)     //Para cada Setor ele varre as databases de Auxiliares, Tecnicos, Profissionais e Diretor
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<financas.Diretor.size();i++)
            {
                TotaldeFuncionarios++;
            }

            //Conta todos os funcionarios do setor MARKETING

            for(int i = 0; i<marketing.Auxiliares.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<marketing.Tecnicos.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<marketing.Profissionais.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<marketing.Diretor.size();i++)
            {
                TotaldeFuncionarios++;
            }

            //Conta todos os funcionarios do setor TECNOLOGIA

            for(int i = 0; i<tecnologia.Auxiliares.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<tecnologia.Tecnicos.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<tecnologia.Profissionais.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<tecnologia.Diretor.size();i++)
            {
                TotaldeFuncionarios++;
            }

            //Conta todos os funcionarios do setor NORMATIVIDADE
            for(int i = 0; i<normatividade.Auxiliares.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<normatividade.Tecnicos.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<normatividade.Profissionais.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<normatividade.Diretor.size();i++)
            {
                TotaldeFuncionarios++;
            }

            //Conta todos os funcionarios do setor DESIGN
            for(int i = 0; i<design.Auxiliares.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<design.Tecnicos.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<design.Profissionais.size();i++)
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<design.Diretor.size();i++)
            {
                TotaldeFuncionarios++;
            }

            //Varre tambem as databases que estao fora dos setores e soma os empregados
            for(int i = 0; i<DiretoresdeOperacao.size();i++)    //Diretores de Operacao
            {
                TotaldeFuncionarios++;
            }
            for(int i = 0; i<DiretorExecutivo.size();i++)       // Diretor Executivo
            {
                TotaldeFuncionarios++;
            }
                //No fim se tem a soma de todos os elementos
        }
        void Empresa::DemitirEmpregado(string id) //Procura por todos os setores, encontra o ID passado como argumento e deleta o funcionario da database, Caso nao encontre o ID reporta que nao existe funcionario com o id digitado
        {
            int check =0;                                           //Serve para checar se o empregado foi encontrado. Se ele permanecer 0 significa que nao existe empregado com esse ID
          //Procura todos os funcionarios do setor FINANCAS e se encontra o id deleta o funcionario da database
            for(int i = 0; i<financas.Auxiliares.size();i++)        //Para cada setor e tipo de empregado os blocos funcionam da seguinte maneira
            {                                                       //Varre se todas as databases de todos os setores
                if(financas.Auxiliares[i].Getid() == id)            //Se o Identificador passado se iguala ao objeto empregado sendo analizado
                {

                financas.Auxiliares.erase(financas.Auxiliares.begin() + i); // utilizando a funcao erase ele eh apagado dinamicamente da database         //AUXILIARES
                check = 1;                                                  //Denota que o empregado foi encontrado
                }
            }
            for(int i = 0; i<financas.Tecnicos.size();i++)          //A mesma logica do primeiro for serve para todos os outros
            {
                if(financas.Tecnicos[i].Getid() == id)
                {                                                                           //TECNICOS
                financas.Tecnicos.erase(financas.Tecnicos.begin() + i);
                check = 1;
                }
            }
            for(int i = 0; i<financas.Profissionais.size();i++)
            {
                if(financas.Profissionais[i].Getid() == id)
                {
                financas.Profissionais.erase(financas.Profissionais.begin() + i);           //PROFISSIONAIS
                check = 1;
                }
            }
            for(int i = 0; i<financas.Diretor.size();i++)
            {
                if(financas.Diretor[i].Getid() == id)
                {
                financas.Diretor.erase(financas.Diretor.begin() + i);                       //Diretor do Setor
                check = 1;
                }
            }

           //Procura todos os funcionarios do setor MARKETING e se encontra o id deleta o funcionario da database-----------------------------------------------------

            for(int i = 0; i<marketing.Auxiliares.size();i++)
            {
                 if(marketing.Auxiliares[i].Getid() == id)
                {
                marketing.Auxiliares.erase(marketing.Auxiliares.begin() + i);                   //AUXILIARES
                check = 1;
                }
            }
            for(int i = 0; i<marketing.Tecnicos.size();i++)
            {
                if(marketing.Tecnicos[i].Getid() == id)                                         //TECNICOS
                {
                marketing.Tecnicos.erase(marketing.Tecnicos.begin() + i);
                check = 1;
                }
            }
            for(int i = 0; i<marketing.Profissionais.size();i++)
            {
                if(marketing.Profissionais[i].Getid() == id)
                {
                marketing.Profissionais.erase(marketing.Profissionais.begin() + i);                 //PROFISSIONAIS
                check = 1;
                }
            }
            for(int i = 0; i<marketing.Diretor.size();i++)
            {
                if(marketing.Diretor[i].Getid() == id)
                {
                marketing.Diretor.erase(marketing.Diretor.begin() + i);                                 //Diretor do Setor
                check = 1;
                }
            }

            //Procura todos os funcionarios do setor TECNOLOGIA e se encontra o id deleta o funcionario da database-----------------------------------------------------

            for(int i = 0; i<tecnologia.Auxiliares.size();i++)
            {
                 if(tecnologia.Auxiliares[i].Getid() == id)
                {
                tecnologia.Auxiliares.erase(tecnologia.Auxiliares.begin() + i);                                     //AUXILIARES
                check = 1;
                }
            }
            for(int i = 0; i<tecnologia.Tecnicos.size();i++)
            {
                if(tecnologia.Tecnicos[i].Getid() == id)                                                        //TECNICOS
                {
                tecnologia.Tecnicos.erase(tecnologia.Tecnicos.begin() + i);
                check = 1;
                }
            }
            for(int i = 0; i<tecnologia.Profissionais.size();i++)
            {
                if(tecnologia.Profissionais[i].Getid() == id)
                {
                tecnologia.Profissionais.erase(tecnologia.Profissionais.begin() + i);                       //PROFISSIONAIS
                check = 1;
                }
            }
            for(int i = 0; i<tecnologia.Diretor.size();i++)
            {
                if(tecnologia.Diretor[i].Getid() == id)
                {
                tecnologia.Diretor.erase(tecnologia.Diretor.begin() + i);                                   //Diretor do Setor
                check = 1;
                }
            }

            //Procura todos os funcionarios do setor NORMATIVIDADE e se encontra o id deleta o funcionario da database--------------------------------------------------
            for(int i = 0; i<normatividade.Auxiliares.size();i++)
            {
                 if(normatividade.Auxiliares[i].Getid() == id)
                {
                normatividade.Auxiliares.erase(normatividade.Auxiliares.begin() + i);                       //AUXILIARES
                check = 1;
                }
            }
            for(int i = 0; i<normatividade.Tecnicos.size();i++)
            {
                if(normatividade.Tecnicos[i].Getid() == id)                                                 //TECNICOS
                {
                normatividade.Tecnicos.erase(normatividade.Tecnicos.begin() + i);
                check = 1;
                }
            }
            for(int i = 0; i<normatividade.Profissionais.size();i++)
            {
                if(normatividade.Profissionais[i].Getid() == id)
                {
                normatividade.Profissionais.erase(normatividade.Profissionais.begin() + i);                 //PROFISSIONAIS
                check = 1;
                }
            }
            for(int i = 0; i<normatividade.Diretor.size();i++)
            {
                if(normatividade.Diretor[i].Getid() == id)
                {
                normatividade.Diretor.erase(normatividade.Diretor.begin() + i);                                 //Diretor do Setor
                check = 1;
                }
            }

            //Procura todos os funcionarios do setor DESIGN e se encontra o id deleta o funcionario da database -----------------------------------------------------------------
            for(int i = 0; i<design.Auxiliares.size();i++)
            {
                 if(design.Auxiliares[i].Getid() == id)
                {
                design.Auxiliares.erase(design.Auxiliares.begin() + i);                         //AUXILIARES
                check = 1;
                }
            }
            for(int i = 0; i<design.Tecnicos.size();i++)
            {
                if(design.Tecnicos[i].Getid() == id)                                //TECNICOS
                {
                design.Tecnicos.erase(design.Tecnicos.begin() + i);
                check = 1;
                }
            }
            for(int i = 0; i<design.Profissionais.size();i++)
            {
                if(design.Profissionais[i].Getid() == id)
                {
                design.Profissionais.erase(design.Profissionais.begin() + i);           //PROFISSIONAIS
                check = 1;
                }
            }
            for(int i = 0; i<design.Diretor.size();i++)
            {
                if(design.Diretor[i].Getid() == id)
                {
                design.Diretor.erase(design.Diretor.begin() + i);                       //Diretor do Setor
                check = 1;
                }
            }
            for(int i = 0; i<DiretoresdeOperacao.size();i++)        //Fora dos Setores tambem eh checado pois eh possivel deletar Diretores
            {
                if(DiretoresdeOperacao[i].Getid() == id)            // A mesma logica eh Seguida
                {
                DiretoresdeOperacao.erase(DiretoresdeOperacao.begin() + i);         //Diretores de Operacao
                check = 1;
                }
            }
            for(int i = 0; i<DiretorExecutivo.size();i++)
            {
                if(DiretorExecutivo[i].Getid() == id)
                {
                DiretorExecutivo.erase(DiretorExecutivo.begin() + i);                   //Diretor do Executivo
                check = 1;
                }
            }
            if(check == 0)                                                              //Caso nao tenha entrado em nenhum IF de nenhum FOR indicando que nao existe funcionario com o ID escolhido
            {
                cout << "Empregado com esse ID nao existe" << endl;                     //Mostra se a mensagem de que o Empregado desse ID nao existe
            }
        }
        void Empresa::PromoverEmpregado(string id)//Faz Varias Checagens e move o Empregado, cujo ID foi passado de argumento, de Database mudando algumas de suas informacoes
        {
            int check = 0;
         //Procura todos os funcionarios do setor FINANCAS e se encontra o id deleta o funcionario da database
            for(int i = 0; i<financas.Auxiliares.size();i++)
            {
                if(financas.Auxiliares[i].Getid() == id)        //Se id do empregado eh igaul ao id passado
                {
                    check = 1;                                  //Marcase que o empregado foi encontrado
                    if(!financas.Tecnicos.empty())              //Checa se Existem Tecnicos no setor pra serem estudados. Leva se em consideracao que eh necessario haver um funcionario de casta maior pra que se possa ser Promovido. Pois esta dito na Expecificacao
                    {                                           //ascender aos empregados de função sempre que cumpram com ter a profissão adequada (por exemplo um auxiliar pode passar a sertécnico, sempre que tenha estudado um técnico),
                Tecnico novo(financas.Auxiliares[i].Getnome(),financas.Auxiliares[i].Getidade(),financas.Auxiliares[i].GetdataNasc(),financas.Auxiliares[i].Getcpf(),financas.Auxiliares[i].Getid(),financas.Auxiliares[i].GetdataEntradaEmpresa(),"financas","administrador", "contador", "economista");
                financas.Tecnicos.push_back(novo);              //Se existem tecnicos, cria um novo tecnico com todas as informacoes do Auxiliar sendo promovido mudando salario e Cargo e adiciona ele na database de tecnicos do setor
                financas.Auxiliares.erase(financas.Auxiliares.begin() + i);     //Deleta as informacoes de Auxiliar dele pois ele nao eh mais um Auxiliar
                id=-1;                                                          // Muda o id para evitar que o funcionario seja promovido varias vezes "-1" nunca sera usado por um usuario
                    }
                    else                                                        //Caso nao exista tecnicos avisa que nao eh possivel promover
                    {
                        cout << "Nao existe Tecnico para o Auxiliar estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<financas.Tecnicos.size();i++)                      //Identico ao bloco de cima mas vai de Tecnico para Profissional e da uma profissao ao empregado que faca parte das profissoes do setor
            {
                if(financas.Tecnicos[i].Getid() == id)                          // Perceba que sem a mudanca de id o Auxiliar promovido a tecnico seria novamente encontrado aqui e promovido novamente
                {
                    check = 1;
                    if(!financas.Profissionais.empty())                         //Checa se existem profissionais no setor
                    {
                Profissional novo(financas.Tecnicos[i].Getnome(),financas.Tecnicos[i].Getidade(),financas.Tecnicos[i].GetdataNasc(),financas.Tecnicos[i].Getcpf(),financas.Tecnicos[i].Getid(),financas.Tecnicos[i].GetdataEntradaEmpresa(),"financas","administrador", "contador", "economista","contador","Profissional",6500);
                financas.Profissionais.push_back(novo);                         //O tecnico vira profissional e eh transferido pra database de profissionais
                financas.Tecnicos.erase(financas.Tecnicos.begin() + i);
                id=-1;                                                          // Muda se o id para evitar multiplas promocoes
                    }
                    else                                                        //Avisa caso nao seja possivel
                    {
                        cout << "Nao existe Profissional para o tecnico estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<financas.Profissionais.size();i++)                 //Promove Profissional para diretor de setor se nao existir um diretor de setor. Pois o diretor deve ser unico
            {
                if(financas.Profissionais[i].Getid() == id)
                {
                    check = 1;
                    if(financas.Diretor.empty())                                //Checa se existe um diretor, se nao, promove o Profissional. Se existe avisa que nao eh possivel promover
                    {
                DiretordeSetor novo(financas.Profissionais[i].Getnome(),financas.Profissionais[i].Getidade(),financas.Profissionais[i].GetdataNasc(),financas.Profissionais[i].Getcpf(),financas.Profissionais[i].Getid(),financas.Profissionais[i].GetdataEntradaEmpresa(),"financas","administrador", "contador", "economista",financas.Profissionais[i].getProfissao(),"Diretor de Setor", 9500);
                financas.Diretor.push_back(novo);                                                           //Ocorre a mudanca de salario e cargo e a mudanca de databases
                financas.Profissionais.erase(financas.Profissionais.begin() + i);
                id=-1;                                                                                      // Muda o ID
                    }
                    else
                    {                                                                                       //Avisa caso nao possivel
                        cout << "Soh eh permitido um Diretor de setor por vez. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<financas.Diretor.size();i++)
            {
                if(financas.Diretor[i].Getid() == id)                                                       // Promove diretor de setor para diretor de Operacao
                {
                    check = 1;
                    if(!DiretoresdeOperacao.empty())                                                        //Checa se existe algum diretor de operacoa para ser estudado
                    {
                        DiretordeOperacoes novo(financas.Diretor[i].Getnome(),financas.Diretor[i].Getidade(),financas.Diretor[i].GetdataNasc(),financas.Diretor[i].Getcpf(),financas.Diretor[i].Getid(),financas.Diretor[i].GetdataEntradaEmpresa(),"financas","administrador", "contador", "economista",financas.Diretor[i].getProfissao(),"Diretor de Operacoes", 13000,Profissoes);
                        DiretoresdeOperacao.push_back(novo);                                                //Atualiza salario e Cargo e troca database
                        financas.Diretor.erase(financas.Diretor.begin() + i);
                        id=-1;                                                                              //Evita mais promocoes nessa mesma chamada
                    }
                    else
                    {                                                                                       // Avisa se nao for possivel
                        cout << "Nao existe Diretor de Operacoes para o Diretor de Setor estudar. falha ao promover" << endl;
                    }
                }
            }

           //Procura todos os funcionarios do setor MARKETING e se encontra o id deleta o funcionario da database

            for(int i = 0; i<marketing.Auxiliares.size();i++)                                               // SE REPETE PARA TODOS OS SETORES
            {
                 if(marketing.Auxiliares[i].Getid() == id)                                              //AUXILIAR -> TECNICO
                {
                    check = 1;
                    if(!marketing.Tecnicos.empty())
                    {
                Tecnico novo(marketing.Auxiliares[i].Getnome(),marketing.Auxiliares[i].Getidade(),marketing.Auxiliares[i].GetdataNasc(),marketing.Auxiliares[i].Getcpf(),marketing.Auxiliares[i].Getid(),marketing.Auxiliares[i].GetdataEntradaEmpresa(),"marketing","comunicador social", "administrador", "mercadologo");
                marketing.Tecnicos.push_back(novo);
                marketing.Auxiliares.erase(marketing.Auxiliares.begin() + i);
                id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Tecnico para o Auxiliar estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<marketing.Tecnicos.size();i++)
            {
                if(marketing.Tecnicos[i].Getid() == id)
                {
                    check = 1;
                    if(!marketing.Profissionais.empty())                                        //TECNICO -> PROFISSIONAL
                    {
                        Profissional novo(marketing.Tecnicos[i].Getnome(),marketing.Tecnicos[i].Getidade(),marketing.Tecnicos[i].GetdataNasc(),marketing.Tecnicos[i].Getcpf(),marketing.Tecnicos[i].Getid(),marketing.Tecnicos[i].GetdataEntradaEmpresa(),"marketing","administrador", "contador", "economista","contador","Profissional",6500);
                        marketing.Profissionais.push_back(novo);
                        marketing.Tecnicos.erase(marketing.Tecnicos.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Profissional para o tecnico estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<marketing.Profissionais.size();i++)
            {
                if(marketing.Profissionais[i].Getid() == id)
                {
                    check = 1;
                    if(marketing.Diretor.empty())                                               // PROFISSIONAL -> DIRETOR DE SETOR
                    {
                        DiretordeSetor novo(marketing.Profissionais[i].Getnome(),marketing.Profissionais[i].Getidade(),marketing.Profissionais[i].GetdataNasc(),marketing.Profissionais[i].Getcpf(),marketing.Profissionais[i].Getid(),marketing.Profissionais[i].GetdataEntradaEmpresa(),"marketing","administrador", "contador", "economista",marketing.Profissionais[i].getProfissao(),"Diretor de Setor", 9500);
                        marketing.Diretor.push_back(novo);
                        marketing.Profissionais.erase(marketing.Profissionais.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Soh eh permitido um Diretor de setor por vez. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<marketing.Diretor.size();i++)
            {
                if(marketing.Diretor[i].Getid() == id)
                {
                    check = 1;
                    if(!DiretoresdeOperacao.empty())                                                                                    //DIRETOR DE SETOR -> DIRETOR DE OPERACAO
                    {
                        DiretordeOperacoes novo(marketing.Diretor[i].Getnome(),marketing.Diretor[i].Getidade(),marketing.Diretor[i].GetdataNasc(),marketing.Diretor[i].Getcpf(),marketing.Diretor[i].Getid(),marketing.Diretor[i].GetdataEntradaEmpresa(),"marketing","administrador", "contador", "economista",marketing.Diretor[i].getProfissao(),"Diretor de Operacoes", 13000,Profissoes);
                        DiretoresdeOperacao.push_back(novo);
                        marketing.Diretor.erase(marketing.Diretor.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Diretor de Operacoes para o Diretor de Setor estudar. falha ao promover" << endl;
                    }
                }
            }

            //Procura todos os funcionarios do setor TECNOLOGIA e se encontra o id deleta o funcionario da database

            for(int i = 0; i<tecnologia.Auxiliares.size();i++)
            {
                 if(tecnologia.Auxiliares[i].Getid() == id)                                 //AUXILIAR -> TECNICO
                {
                    check = 1;
                    if(!tecnologia.Tecnicos.empty())
                    {
                Tecnico novo(tecnologia.Auxiliares[i].Getnome(),tecnologia.Auxiliares[i].Getidade(),tecnologia.Auxiliares[i].GetdataNasc(),tecnologia.Auxiliares[i].Getcpf(),tecnologia.Auxiliares[i].Getid(),tecnologia.Auxiliares[i].GetdataEntradaEmpresa(),"tecnologia","eng. da computacao", "eng. de sistemas" , "eng. da informacao");
                tecnologia.Tecnicos.push_back(novo);
                tecnologia.Auxiliares.erase(tecnologia.Auxiliares.begin() + i);
                id=-1;
                 }
                    else
                    {
                        cout << "Nao existe Tecnico para o Auxiliar estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<tecnologia.Tecnicos.size();i++)
            {
                if(tecnologia.Tecnicos[i].Getid() == id)
                {
                    check = 1;
                    if(!tecnologia.Profissionais.empty())                                                                       //TECNICO -> PROFISSIONAL
                    {
                        Profissional novo(tecnologia.Tecnicos[i].Getnome(),tecnologia.Tecnicos[i].Getidade(),tecnologia.Tecnicos[i].GetdataNasc(),tecnologia.Tecnicos[i].Getcpf(),tecnologia.Tecnicos[i].Getid(),tecnologia.Tecnicos[i].GetdataEntradaEmpresa(),"tecnologia","eng. da computacao", "eng. de sistemas" , "eng. da informacao","eng. da computacao","Profissional",6500);
                        tecnologia.Profissionais.push_back(novo);
                        tecnologia.Tecnicos.erase(tecnologia.Tecnicos.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Profissional para o tecnico estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<tecnologia.Profissionais.size();i++)
            {
                if(tecnologia.Profissionais[i].Getid() == id)
                {
                    check = 1;
                    if(tecnologia.Diretor.empty())
                    {
                        DiretordeSetor novo(tecnologia.Profissionais[i].Getnome(),tecnologia.Profissionais[i].Getidade(),tecnologia.Profissionais[i].GetdataNasc(),tecnologia.Profissionais[i].Getcpf(),tecnologia.Profissionais[i].Getid(),tecnologia.Profissionais[i].GetdataEntradaEmpresa(),"tecnologia","eng. da computacao", "eng. de sistemas" , "eng. da informacao",tecnologia.Profissionais[i].getProfissao(),"Diretor de Setor", 9500);
                        tecnologia.Diretor.push_back(novo);
                        tecnologia.Profissionais.erase(tecnologia.Profissionais.begin() + i);
                        id=-1;                                                                                      // PROFISSIONAL -> DIRETOR DE SETOR
                    }
                    else
                    {
                        cout << "Soh eh permitido um Diretor de setor por vez. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<tecnologia.Diretor.size();i++)
            {
                if(tecnologia.Diretor[i].Getid() == id)
                {
                    check = 1;                                                                                                  //DIRETOR DE SETOR -> DIRETOR DE OPERACAO
                    if(!DiretoresdeOperacao.empty())
                    {
                        DiretordeOperacoes novo(tecnologia.Diretor[i].Getnome(),tecnologia.Diretor[i].Getidade(),tecnologia.Diretor[i].GetdataNasc(),tecnologia.Diretor[i].Getcpf(),tecnologia.Diretor[i].Getid(),tecnologia.Diretor[i].GetdataEntradaEmpresa(),"tecnologia","eng. da computacao", "eng. de sistemas" , "eng. da informacao",tecnologia.Diretor[i].getProfissao(),"Diretor de Operacoes", 13000,Profissoes);
                        DiretoresdeOperacao.push_back(novo);
                        tecnologia.Diretor.erase(tecnologia.Diretor.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Diretor de Operacoes para o Diretor de Setor estudar. falha ao promover" << endl;
                    }
                }
            }

            //Procura todos os funcionarios do setor NORMATIVIDADE e se encontra o id deleta o funcionario da database
            for(int i = 0; i<normatividade.Auxiliares.size();i++)
            {
                 if(normatividade.Auxiliares[i].Getid() == id)
                {                                                                                       //AUXILIAR -> TECNICO
                    check = 1;
                    if(!normatividade.Tecnicos.empty())
                    {
                Tecnico novo(normatividade.Auxiliares[i].Getnome(),normatividade.Auxiliares[i].Getidade(),normatividade.Auxiliares[i].GetdataNasc(),normatividade.Auxiliares[i].Getcpf(),normatividade.Auxiliares[i].Getid(),normatividade.Auxiliares[i].GetdataEntradaEmpresa(),"normatividade","advocado", "comunicador social","contador");
                normatividade.Tecnicos.push_back(novo);
                normatividade.Auxiliares.erase(normatividade.Auxiliares.begin() + i);
                id=-1;
                 }
                    else
                    {
                        cout << "Nao existe Tecnico para o Auxiliar estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<normatividade.Tecnicos.size();i++)
            {
                if(normatividade.Tecnicos[i].Getid() == id)
                {                                                                                                               //TECNICO -> PROFISSIONAL
                    check = 1;
                    if(!normatividade.Profissionais.empty())
                    {
                        Profissional novo(normatividade.Tecnicos[i].Getnome(),normatividade.Tecnicos[i].Getidade(),normatividade.Tecnicos[i].GetdataNasc(),normatividade.Tecnicos[i].Getcpf(),normatividade.Tecnicos[i].Getid(),normatividade.Tecnicos[i].GetdataEntradaEmpresa(),"normatividade","advocado", "comunicador social","contador","contador","Profissional",6500);
                        normatividade.Profissionais.push_back(novo);
                        normatividade.Tecnicos.erase(normatividade.Tecnicos.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Profissional para o tecnico estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<normatividade.Profissionais.size();i++)
            {
                if(normatividade.Profissionais[i].Getid() == id)
                {
                    check = 1;                                                                                          // PROFISSIONAL -> DIRETOR DE SETOR
                    if(normatividade.Diretor.empty())
                    {
                        DiretordeSetor novo(normatividade.Profissionais[i].Getnome(),normatividade.Profissionais[i].Getidade(),normatividade.Profissionais[i].GetdataNasc(),normatividade.Profissionais[i].Getcpf(),normatividade.Profissionais[i].Getid(),normatividade.Profissionais[i].GetdataEntradaEmpresa(),"normatividade","advocado", "comunicador social","contador",normatividade.Profissionais[i].getProfissao(),"Diretor de Setor", 9500);
                        normatividade.Diretor.push_back(novo);
                        normatividade.Profissionais.erase(normatividade.Profissionais.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Soh eh permitido um Diretor de setor por vez. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<normatividade.Diretor.size();i++)
            {
                if(normatividade.Diretor[i].Getid() == id)
                {
                    check = 1;
                    if(!DiretoresdeOperacao.empty())                                                                                    //DIRETOR DE SETOR -> DIRETOR DE OPERACAO
                    {
                        DiretordeOperacoes novo(normatividade.Diretor[i].Getnome(),normatividade.Diretor[i].Getidade(),normatividade.Diretor[i].GetdataNasc(),normatividade.Diretor[i].Getcpf(),normatividade.Diretor[i].Getid(),normatividade.Diretor[i].GetdataEntradaEmpresa(),"normatividade","advocado", "comunicador social","contador",normatividade.Diretor[i].getProfissao(),"Diretor de Operacoes", 13000,Profissoes);
                        DiretoresdeOperacao.push_back(novo);
                        normatividade.Diretor.erase(normatividade.Diretor.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Diretor de Operacoes para o Diretor de Setor estudar. falha ao promover" << endl;
                    }
                }
            }

            //Procura todos os funcionarios do setor DESIGN e se encontra o id deleta o funcionario da database
            for(int i = 0; i<design.Auxiliares.size();i++)
            {
                 if(design.Auxiliares[i].Getid() == id)
                {
                    check = 1;                                                                                                  //AUXILIAR -> TECNICO
                    if(!design.Tecnicos.empty())
                    {
                Tecnico novo(design.Auxiliares[i].Getnome(),design.Auxiliares[i].Getidade(),design.Auxiliares[i].GetdataNasc(),design.Auxiliares[i].Getcpf(),design.Auxiliares[i].Getid(),design.Auxiliares[i].GetdataEntradaEmpresa(),"design","design grafico", "design multimedia", "eng. social");
                design.Tecnicos.push_back(novo);
                design.Auxiliares.erase(design.Auxiliares.begin() + i);
                id=-1;
                 }
                    else
                    {
                        cout << "Nao existe Tecnico para o Auxiliar estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<design.Tecnicos.size();i++)
            {
                if(design.Tecnicos[i].Getid() == id)
                {
                    check = 1;                                                                                          //TECNICO -> PROFISSIONAL
                if(!design.Profissionais.empty())
                    {
                        Profissional novo(design.Tecnicos[i].Getnome(),design.Tecnicos[i].Getidade(),design.Tecnicos[i].GetdataNasc(),design.Tecnicos[i].Getcpf(),design.Tecnicos[i].Getid(),design.Tecnicos[i].GetdataEntradaEmpresa(),"design","design grafico", "design multimedia", "eng. social","design grafico","Profissional",6500);
                        design.Profissionais.push_back(novo);
                        design.Tecnicos.erase(design.Tecnicos.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Profissional para o tecnico estudar. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<design.Profissionais.size();i++)
            {
                if(design.Profissionais[i].Getid() == id)
                {
                    check = 1;
                    if(design.Diretor.empty())                                                                                      // PROFISSIONAL -> DIRETOR DE SETOR
                    {
                        DiretordeSetor novo(design.Profissionais[i].Getnome(),design.Profissionais[i].Getidade(),design.Profissionais[i].GetdataNasc(),design.Profissionais[i].Getcpf(),design.Profissionais[i].Getid(),design.Profissionais[i].GetdataEntradaEmpresa(),"design","design grafico", "design multimedia", "eng. social",design.Profissionais[i].getProfissao(),"Diretor de Setor", 9500);
                        design.Diretor.push_back(novo);
                        design.Profissionais.erase(design.Profissionais.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Soh eh permitido um Diretor de setor por vez. falha ao promover" << endl;
                    }
                }
            }
            for(int i = 0; i<design.Diretor.size();i++)
            {
                if(design.Diretor[i].Getid() == id)
                {
                    check = 1;                                                                                                  //DIRETOR DE SETOR -> DIRETOR DE OPERACAO
                    if(!DiretoresdeOperacao.empty())
                    {
                        DiretordeOperacoes novo(design.Diretor[i].Getnome(),design.Diretor[i].Getidade(),design.Diretor[i].GetdataNasc(),design.Diretor[i].Getcpf(),design.Diretor[i].Getid(),design.Diretor[i].GetdataEntradaEmpresa(),"design","design grafico", "design multimedia", "eng. social",design.Diretor[i].getProfissao(),"Diretor de Operacoes", 13000,Profissoes);
                        DiretoresdeOperacao.push_back(novo);
                        design.Diretor.erase(design.Diretor.begin() + i);
                        id=-1;
                    }
                    else
                    {
                        cout << "Nao existe Diretor de Operacoes para o Diretor de Setor estudar. falha ao promover" << endl;
                    }
                }
            }

            //DIRETOR DE OPERACAO -> DIRETOR EXECUTIVO
            for(int i = 0; i<DiretoresdeOperacao.size();i++)
            {
                if(DiretoresdeOperacao[i].Getid() == id)
                {
                    check = 1;
                    if(DiretorExecutivo.empty())            //Da mesma forma que soh se pode ter um Diretor de Setor para cada setor. Soh pode ter um diretor executivo por empresa
                    {
                        DiretordeExecutivo novo(DiretoresdeOperacao[i].Getnome(),DiretoresdeOperacao[i].Getidade(),DiretoresdeOperacao[i].GetdataNasc(),DiretoresdeOperacao[i].Getcpf(),DiretoresdeOperacao[i].Getid(),DiretoresdeOperacao[i].GetdataEntradaEmpresa(),"Todos","1", "2", "3",DiretoresdeOperacao[i].Getprofissao(),"Diretor Executivo", 18000,Profissoes);
                        DiretorExecutivo.push_back(novo);
                        design.Profissionais.erase(design.Profissionais.begin() + i);
                        id=-1;
                    }
                    else                                    //Avisa se nao for possivel
                    {
                        cout << "Soh eh permitido um Diretor Executivo por vez. falha ao promover" << endl;
                    }
                }
            }
            if(check == 0)                              //Caso nao tenha entrado em nenhum IF indicando que nao foi encontrado o ID avisa que o empregado nao existe
            {
                cout << "Empregado com esse ID nao existe" << endl;
            }
        }
        void Empresa::CalcularPorcentagem()
        {
            SetTotaldeFuncionarios();   // Descobre quantos funcionarios a empresa tem no total
            double maisdeseismil =0;     // Contador de Empregados com salario mais de 6000
            //Conta todos os funcionarios do setor FINANCAS====================================================================================================
            for(int i = 0; i<financas.Auxiliares.size();i++)                                                    //Varre todas as databases
            {
                if((financas.Auxiliares[i].Getsalario()+financas.Auxiliares[i].Getvale_transporte())>=6000)     //  Incrementa o valor de empregados com salario > 6000 quando encontra um
                {                                                                                               // Para auxiliares e Tecnicos leva em consideracao o vale transporte
                maisdeseismil++;
                }
            }
            for(int i = 0; i<financas.Tecnicos.size();i++)
            {
                if((financas.Tecnicos[i].Getsalario()+financas.Tecnicos[i].Getvale_transporte())>=6000)         //A funcao eh simples varre tudo, Checa se tem salario >=6000
                {                                                                                               //Se tiver Incrementa
                maisdeseismil++;
                }
            }
            for(int i = 0; i<financas.Profissionais.size();i++)
            {
                if(financas.Profissionais[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<financas.Diretor.size();i++)
            {
               if(financas.Diretor[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }

            //Conta todos os funcionarios do setor MARKETING====================================================================================================

            for(int i = 0; i<marketing.Auxiliares.size();i++)
            {
                if((marketing.Auxiliares[i].Getsalario()+marketing.Auxiliares[i].Getvale_transporte())>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<marketing.Tecnicos.size();i++)
            {
                if((marketing.Tecnicos[i].Getsalario()+marketing.Tecnicos[i].Getvale_transporte())>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<marketing.Profissionais.size();i++)
            {
                if(marketing.Profissionais[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<marketing.Diretor.size();i++)
            {
                if(marketing.Diretor[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }

            //Conta todos os funcionarios do setor TECNOLOGIA=================================================================================================================

            for(int i = 0; i<tecnologia.Auxiliares.size();i++)
            {
                if((tecnologia.Auxiliares[i].Getsalario()+tecnologia.Auxiliares[i].Getvale_transporte())>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<tecnologia.Tecnicos.size();i++)
            {
                if((tecnologia.Tecnicos[i].Getsalario()+tecnologia.Tecnicos[i].Getvale_transporte())>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<tecnologia.Profissionais.size();i++)
            {
                if(tecnologia.Profissionais[i].Getsalario()>=6000)
                {
                maisdeseismil++;

                }
            }
            for(int i = 0; i<tecnologia.Diretor.size();i++)
            {
                if(tecnologia.Diretor[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }

            //Conta todos os funcionarios do setor NORMATIVIDADE======================================================================================================================
            for(int i = 0; i<normatividade.Auxiliares.size();i++)
            {
                if((normatividade.Auxiliares[i].Getsalario()+normatividade.Auxiliares[i].Getvale_transporte())>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<normatividade.Tecnicos.size();i++)
            {
                if((normatividade.Tecnicos[i].Getsalario()+normatividade.Tecnicos[i].Getvale_transporte())>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<normatividade.Profissionais.size();i++)
            {
                if(normatividade.Profissionais[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<normatividade.Diretor.size();i++)
            {
                if(normatividade.Diretor[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }

            //Conta todos os funcionarios do setor DESIGN=============================================================================================================================
            for(int i = 0; i<design.Auxiliares.size();i++)
            {
                if((design.Auxiliares[i].Getsalario()+design.Auxiliares[i].Getvale_transporte())>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<design.Tecnicos.size();i++)
            {
                if((design.Tecnicos[i].Getsalario()+design.Tecnicos[i].Getvale_transporte())>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<design.Profissionais.size();i++)
            {
                if(design.Profissionais[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<design.Diretor.size();i++)
            {
               if(design.Diretor[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }
            //Checa tambem o Diretor Executivo e os de Operacao =========================================================================================================
            for(int i = 0; i<DiretoresdeOperacao.size();i++)
            {
                if(DiretoresdeOperacao[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }
            for(int i = 0; i<DiretorExecutivo.size();i++)
            {
                if(DiretorExecutivo[i].Getsalario()>=6000)
                {
                maisdeseismil++;
                }
            }                                                                   //Por fim eh feito o calculo Funcionarios com mais de 6000 de salario dividido pelo total, assim encontrando a porcentagem de Funcionarios com mais de 6000
            cout << "A porcentagem de empregados que recebem mais de 6 mil contando com vale transporte eh de " <<(maisdeseismil/TotaldeFuncionarios)*100<< "%" << endl; // Multiplica por 100 para ficar mais apresentavel
        }

        string Empresa::EncontrarEmpregado(string id)
        {
            int check =0;                                           //Serve para checar se o empregado foi encontrado. Se ele permanecer 0 significa que nao existe empregado com esse ID
          //Procura todos os funcionarios do setor FINANCAS e se encontra o id deleta o funcionario da database
            for(int i = 0; i<financas.Auxiliares.size();i++)        //Para cada setor e tipo de empregado os blocos funcionam da seguinte maneira
            {                                                       //Varre se todas as databases de todos os setores
                if(financas.Auxiliares[i].Getid() == id)            //Se o Identificador passado se iguala ao objeto empregado sendo analizado
                {
                    return financas.Auxiliares[i].Getcargo();
                }
            }
            for(int i = 0; i<financas.Tecnicos.size();i++)          //A mesma logica do primeiro for serve para todos os outros
            {
                if(financas.Tecnicos[i].Getid() == id)
                {                                                                           //TECNICOS
                return financas.Tecnicos[i].Getcargo();
                }
            }
            for(int i = 0; i<financas.Profissionais.size();i++)
            {
                if(financas.Profissionais[i].Getid() == id)
                {
                return financas.Profissionais[i].Getcargo();
                }
            }
            for(int i = 0; i<financas.Diretor.size();i++)
            {
                if(financas.Diretor[i].Getid() == id)
                {
                return financas.Diretor[i].Getcargo();
                }
            }

           //Procura todos os funcionarios do setor MARKETING e se encontra o id deleta o funcionario da database-----------------------------------------------------

            for(int i = 0; i<marketing.Auxiliares.size();i++)
            {
                 if(marketing.Auxiliares[i].Getid() == id)
                {
                return marketing.Auxiliares[i].Getcargo();
                }
            }
            for(int i = 0; i<marketing.Tecnicos.size();i++)
            {
                if(marketing.Tecnicos[i].Getid() == id)                                         //TECNICOS
                {
                return marketing.Tecnicos[i].Getcargo();
                }
            }
            for(int i = 0; i<marketing.Profissionais.size();i++)
            {
                if(marketing.Profissionais[i].Getid() == id)
                {
                return marketing.Profissionais[i].Getcargo();
                }
            }
            for(int i = 0; i<marketing.Diretor.size();i++)
            {
                if(marketing.Diretor[i].Getid() == id)
                {
                return marketing.Diretor[i].Getcargo();
                }
            }

            //Procura todos os funcionarios do setor TECNOLOGIA e se encontra o id deleta o funcionario da database-----------------------------------------------------

            for(int i = 0; i<tecnologia.Auxiliares.size();i++)
            {
                 if(tecnologia.Auxiliares[i].Getid() == id)
                {
                return tecnologia.Auxiliares[i].Getcargo();
                }
            }
            for(int i = 0; i<tecnologia.Tecnicos.size();i++)
            {
                if(tecnologia.Tecnicos[i].Getid() == id)                                                        //TECNICOS
                {
                return tecnologia.Tecnicos[i].Getcargo();
                }
            }
            for(int i = 0; i<tecnologia.Profissionais.size();i++)
            {
                if(tecnologia.Profissionais[i].Getid() == id)
                {
                return tecnologia.Profissionais[i].Getcargo();
                }
            }
            for(int i = 0; i<tecnologia.Diretor.size();i++)
            {
                if(tecnologia.Diretor[i].Getid() == id)
                {
                return tecnologia.Diretor[i].Getcargo();
                }
            }

            //Procura todos os funcionarios do setor NORMATIVIDADE e se encontra o id deleta o funcionario da database--------------------------------------------------
            for(int i = 0; i<normatividade.Auxiliares.size();i++)
            {
                 if(normatividade.Auxiliares[i].Getid() == id)
                {
                return normatividade.Auxiliares[i].Getcargo();
                }
            }
            for(int i = 0; i<normatividade.Tecnicos.size();i++)
            {
                if(normatividade.Tecnicos[i].Getid() == id)                                                 //TECNICOS
                {
                return normatividade.Tecnicos[i].Getcargo();
                }
            }
            for(int i = 0; i<normatividade.Profissionais.size();i++)
            {
                if(normatividade.Profissionais[i].Getid() == id)
                {
                return normatividade.Profissionais[i].Getcargo();
                }
            }
            for(int i = 0; i<normatividade.Diretor.size();i++)
            {
                if(normatividade.Diretor[i].Getid() == id)
                {
                return normatividade.Diretor[i].Getcargo();
                }
            }

            //Procura todos os funcionarios do setor DESIGN e se encontra o id deleta o funcionario da database -----------------------------------------------------------------
            for(int i = 0; i<design.Auxiliares.size();i++)
            {
                 if(design.Auxiliares[i].Getid() == id)
                {
                return design.Auxiliares[i].Getcargo();
                }
            }
            for(int i = 0; i<design.Tecnicos.size();i++)
            {
                if(design.Tecnicos[i].Getid() == id)                                //TECNICOS
                {
                return design.Tecnicos[i].Getcargo();
                }
            }
            for(int i = 0; i<design.Profissionais.size();i++)
            {
                if(design.Profissionais[i].Getid() == id)
                {
                return design.Profissionais[i].Getcargo();
                }
            }
            for(int i = 0; i<design.Diretor.size();i++)
            {
                if(design.Diretor[i].Getid() == id)
                {
                return design.Diretor[i].Getcargo();
                }
            }
            for(int i = 0; i<DiretoresdeOperacao.size();i++)        //Fora dos Setores tambem eh checado pois eh possivel deletar Diretores
            {
                if(DiretoresdeOperacao[i].Getid() == id)            // A mesma logica eh Seguida
                {
                return DiretoresdeOperacao[i].Getcargo();
                }
            }
            for(int i = 0; i<DiretorExecutivo.size();i++)
            {
                if(DiretorExecutivo[i].Getid() == id)
                {
                return DiretorExecutivo[i].Getcargo();
                }
            }
            if(check == 0)                                                              //Caso nao tenha entrado em nenhum IF de nenhum FOR indicando que nao existe funcionario com o ID escolhido
            {
                cout << "Empregado com esse ID nao existe" << endl;                     //Mostra se a mensagem de que o Empregado desse ID nao existe
                return "";
            }
        }
