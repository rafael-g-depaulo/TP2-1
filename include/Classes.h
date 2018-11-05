#ifndef CLASSES_H
#define CLASSES_H
#include <bits/stdc++.h>                    //Conjunto de bibliotecas em C++           //Creio que tenha todas as bibliotecas padrao e classes gabarito
using namespace std;

class Setor;                                //Foward Declaration das classes para que outras classes possam ter objetos dela
class Auxiliar;
class Tecnico;
class DiretordeSetor;
class Profissional;

class Empregado                             //A base para todos os tipos de empregado do sistema
{
    public:
        Empregado();//Empregado recebe NOME, IDADE ,DATA DE NASCIMENTO, CPF ,ID, DATA EMPRESA, TITULO DO SETOR , AS TRES PROFISSOES QUE O SETOR PERMITE, CARGO DO EMPREGADO E SEU SALARIO
        Empregado(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3, string cargo, float salario);//INICIALIZA TODAS AS VARIAVEIS
        virtual ~Empregado();   // DESTRUCTOR

        void Imprime();         // IMPRIME AS INFORMACOES BASICAS DO EMPREGADO PARA CHECAGEM

        string Getnome() { return nome; }                   //GETS E SETS SIMPLES PARA TODAS AS VARIAVEIS
        void Setnome(string val);

        string Getidade() { return idade; }
        void Setidade(string val);                          //SET IDADE FUNCIONA DE MANEIRA DIFERENTE. SE NA DATA DE NASCIMENTO O ANO NAO BATER COM A IDADE O ANO DA DATA DE NASCIMENTO EH "CONCERTADO"
                                                            //CONSIDERA SE DATA ATUAL ONZE E CINQUENTA E NOVE DO ULTIMO DIA DO ANO DE 2018
        string GetdataNasc() { return dataNasc; }
        void SetdataNasc(string val);

        string GetdataEntradaEmpresa() { return dataEntradaEmpresa; }
        void SetdataEntradaEmpresa(string val);

        string Getcpf() { return cpf; }
        void Setcpf(string val);

        double Getsalario() { return salario; }
        void Setsalario(double val)
        {
            if(val > 0)
            salario = val;
            else
            cout << "Valor de salario digitado invalido" << endl;
             }

        string Getid() { return id; }
        void Setid(string val) { id = val; }

        void Setcargo(string val)
        {
            if (val == "Auxiliar" || val == "Tecnico" || val == "Profissional" || val == "Diretor de Setor" || val == "Diretor de Operacoes" || val == "Diretor Executivo" )
            cargo = val;
            else
                cout << "Cargo invalido nessa empresa" << endl;
            }
        string Getcargo() { return cargo; }

        Setor* pertence;                                        //Setor ao qual o trabalhador pertence // UTILIZADO PARA VER PROFISSOES POSSIVEIS DEPENDENDO DO CARGO

        void Aumentarsalario(double val);

    protected:

    private:                                                    //BOA PARTE DAS VARIAVEIS SAO STRINGS PARA MELHOR IMPLEMENTAR POSSIVEIS RESTRICOES NA ETAPA 2
        string nome;
        string idade;
        string dataNasc;
        string dataEntradaEmpresa;
        string cpf;
        double salario;
        string id;
        string cargo;


};

class Setor                                                     //OBJETO QUE DEFINE BOA PARTE DA ORGANIZACAO DA EMPRESA
{
    public:
        Setor();
        Setor(string tit,string prof1, string prof2, string prof3); //RECEBE SEU NOME E SUAS TRES PROFISSOES QUE LIMITAM OS EMPREGADOS
        virtual ~Setor();                                            //DESTRUTOR
        int ChecarCargo(string val);                                //BASEADO NA PROFISSAO PASSADA CHECA SE O FUNCIONARIO PODE OU NAO TER ELA
        void setProfissao(string val,string val2, string val3)      //ATRIBUI AS VARIAVEIS QUAIS STRINGS VAO SER AS PROFISSOES PERMITIDAS DO SETOR
        {
        profissao1= val;
        profissao2 = val2;
        profissao3 = val3;
        }
        void setTitulo(string val){titulo = val;}                   //ATRIBUI O NOME DO SETOR
        string getTitulo(){return titulo;}
        string getprofissao1(){return profissao1;}                  //RETORNAM AS PROFISSOES PERMITIDAS
        string getprofissao2(){return profissao2;}
        string getprofissao3(){return profissao3;}

        vector<Auxiliar> Auxiliares;                                //VETOR QUE GUARDA TODOS OS AUXILIARES DO SETOR //DATABASE DE AUXILIARES
        vector<Profissional> Profissionais;                         //VETOR QUE GUARDA TODOS OS AUXILIARES DO SETOR //DATABASE DE AUXILIARES
        vector<Tecnico> Tecnicos;                                   //VETOR QUE GUARDA TODOS OS AUXILIARES DO SETOR //DATABASE DE AUXILIARES
        vector<DiretordeSetor> Diretor;                             //VETOR QUE GUARDA TODOS OS AUXILIARES DO SETOR //DATABASE DE AUXILIARES

    protected:

    private:
        string titulo;
        string profissao1;
        string profissao2;
        string profissao3;

};

class Auxiliar : public Empregado                               //Tipo de EMPREGADO ONDE A UNICA DIFERENCA SERA O VALE TRANSPORTE E O VALOR DO SALARIO
{
    public:                                                     //Inicializado igual a empregado porem cargo e salario ja estao pre definidos // vale transporte tambem definido
        Auxiliar(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3);
        virtual ~Auxiliar();

        int Getvale_transporte() { return vale_transporte; }        //GET E SET
        void Setvale_transporte(int val) { vale_transporte = val; }

    protected:

    private:
        int vale_transporte;

};

class Tecnico : public Empregado                                //Tipo de EMPREGADO ONDE A UNICA DIFERENCA SERA O VALE TRANSPORTE E O VALOR DO SALARIO
{
    public:                                                     //Identico ao do Auxiliar
        Tecnico(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3);
        virtual ~Tecnico();
        int Getvale_transporte() { return vale_transporte; }
        void Setvale_transporte(int val) { vale_transporte = val; }
    protected:

    private:
        int vale_transporte;
};

class Profissional : public Empregado                           //Tipo de EMPREGADO ONDE o salario eh diferente e possui um campo a mais que denota a profissao
{
    public:
        Profissional(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3,string Emprego,string cargo,double salario);
        virtual ~Profissional();
        void SetProfissao(string val);
        string getProfissao(){return Profissao;}

    protected:

    private:
        string Profissao;

};

class DiretordeSetor : public Profissional                      //Tipo de EMPREGADO ONDE o salario eh diferente e possui um campo a mais que denota a profissao.
{                                                               //Possui um metodo a mais para ganhar bonus
    public:
        DiretordeSetor(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3,string Emprego, string cargo, double salario);
        virtual ~DiretordeSetor();
        void GanharBonus(){Setsalario(Getsalario()*1.02);}  //Salario + Bonus

    protected:

    private:
};

class DiretordeOperacoes : public Empregado         //Semelhante ao profissonal mas nao possui limitacao de profissao. Possui salario diferente e um metodo pra ganhar bonus
{
    public:
        DiretordeOperacoes(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3,string Emprego, string cargo, double salario,vector<string> profissoes);
        virtual ~DiretordeOperacoes();

        string Getprofissao() { return profissao; }
        void Setprofissao(string val,vector<string> val2);
        int CheckProfissao(vector<string> val);
        void GanharBonus(){this->Setsalario(Getsalario()*1.02);}

    protected:

    private:
        string profissao;
};

class DiretordeExecutivo : public DiretordeOperacoes  //Identico ao Diretor de Operacoes por enquanto. Mas ja foi criada pensando no projeto 2
{
    public:
        DiretordeExecutivo(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3,string Emprego, string cargo, double salario,vector<string> profissoes);
        virtual ~DiretordeExecutivo();

    protected:

    private:
};
class Empresa
{
    public:
        Empresa(); //Construtor
        virtual ~Empresa();

        Setor financas;     //Todos os setores padrao
        Setor marketing;
        Setor tecnologia;
        Setor normatividade;
        Setor design;

        vector<string> Profissoes;                          //Vector para guardas as profissoes permitidas pela empresa
        vector<DiretordeOperacoes> DiretoresdeOperacao;     //Vector que guarda diretores de operacao
        vector<DiretordeOperacoes> DiretorExecutivo;        //Vector que guarda o diretor executivo

        void SetTotaldeFuncionarios();                      //Quantos funcionarios a empresa tem
        int  GetTotaldeFuncionarios(){return TotaldeFuncionarios;}
        void DemitirEmpregado(string id);                   //Procura o Id do empregado e deleta ele da database
        void PromoverEmpregado(string id);                  //Move um Funcionario de cargo
        void CalcularPorcentagem();                         //Topico 4 do trabalho encontrar a porcentagem de empregados com 6000 ou mais de salario
        string EncontrarEmpregado(string val);

    protected:

    private:
        double TotaldeFuncionarios;

};

#endif // CLASSES_H
