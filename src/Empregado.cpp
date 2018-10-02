#include "Classes.h"
//Empregado recebe NOME, IDADE ,DATA DE NASCIMENTO, CPF ,ID, DATA EMPRESA, TITULO DO SETOR , AS TRES PROFISSOES QUE O SETOR PERMITE, CARGO DO EMPREGADO E SEU SALARIO como especificado no roteiro
Empregado::Empregado(string nome, string idade, string dataNasc, string CPF, string ID, string dataEmpresa, string titulo,string prof1,string prof2,string prof3, string cargo, float salario):pertence(new Setor(titulo,prof1,prof2,prof3))
{
   Empregado::Setnome(nome);
   Empregado::SetdataNasc(dataNasc);        //Data de nascimento antes da idade pois ela pode sofrer correcao
   Empregado::Setidade(idade);
   Empregado::Setcpf(CPF);
   Empregado::Setid(ID);
   Empregado::SetdataEntradaEmpresa(dataEmpresa);
   Empregado::Setcargo(cargo);
   Empregado::Setsalario(salario);
}

Empregado::~Empregado()
{

}

        void Empregado::Imprime()   //Imprime na tela as informacoes do objeto
        {
        cout <<"Nome: "<< nome << endl;
        cout <<"Idade: "<<idade << endl;
        cout <<"Data de Nascimento: "<< dataNasc << endl;
        cout <<"Cpf: "<< cpf << endl;
        cout <<"Id: "<< id << endl;
        cout <<"Salario: "<< salario << endl;
        cout <<"Data de Ingresso na Empresa: "<< dataEntradaEmpresa << endl;
        cout <<"Nome do setor: "<< pertence->getTitulo() << endl;
        cout <<"Cargo: "<< cargo << endl;

        }

        void Empregado::Aumentarsalario(double val)       //Aumenta o salario do empregado pela quantia passada
        {

        if (val < 0)                                       // impede que o salario seja decrementado
        {
            cout << "A quantia digitada nao eh valida" << endl << "O aumento deve ser de 0 ou mais." << endl;   //Avisa caso nao seja definido
        }
        else
            salario = salario + val;
        }

void Empregado::Setidade(string idadedigitada)          //Muda a idade do empregado e modifica o ano da data de nascimento se ela estiver incorreta
{                                                       // Eh necessario que a string de data de nascimento esteja no formato dia/mes/ano
    idade = idadedigitada;                              //Torna a idade igual a idade digitada


                string temp =GetdataNasc();             //Passa a data de nascimento para um temporario
                int idadenumero = 2018 - idadenumero;       // Calcula 2018 - idade para achar o ano correto
                std::ostringstream s;
                s << idadenumero;
                const std::string novonum(s.str());     //Transforma o numero em string
                temp = temp.substr (0,temp.length()-4); //Apaga o ano da string original
                temp = temp + novonum;                  //acrecenta o ano calculado
                SetdataNasc(temp);

            }
