#include "../include/Classes.h"
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
{
    int check = 0;
    for (int j = 0; j < idadedigitada.size(); j++){
                 if(!(idadedigitada[j] <= '9' && idadedigitada[j] >= '0'))                /**essa linha faz soh poder ter numeros */
                check = 1;
    }
    if (check ==0)
    {
     int idadenumero = atoi(idadedigitada.c_str());
     if(idadenumero>0 && idadenumero < 110)
     {
                                                    // Eh necessario que a string de data de nascimento esteja no formato dia/mes/ano
                idade = idadedigitada;                              //Torna a idade igual a idade digitada
                string temp =GetdataNasc();             //Passa a data de nascimento para um temporario
                idadenumero = 2018 - idadenumero;       // Calcula 2018 - idade para achar o ano correto
                std::ostringstream s;
                s << idadenumero;
                const std::string novonum(s.str());     //Transforma o numero em string
                temp = temp.substr (0,temp.length()-4); //Apaga o ano da string original
                temp = temp + novonum;                  //acrecenta o ano calculado
                SetdataNasc(temp);
     }
     else
     {
         cout << " A idade digitada nao possui valor valido" << endl;
     }
    }
    else
     {
         cout << " A idade digitada nao possui caracteres validos" << endl;
     }
            }

            void Empregado::Setnome(string val)
            {
                int check = 0;
            for (int j = (val.size()-1); j >= 0; j--){
                if(!(((val[j] <= 'z' && val[j] >= 'a') || (val[j] <= 'Z' && val[j] >= 'A'))||val[j] == ' '))                /**essa linha faz soh poder ter letras */
                check = 1;
        }
            if(check != 0)     /**checa as propriedades da string dada e se as restricoes n forem cumpridas pede uma nova string e chama a funcao novamente */
        {
            cout << "O nome digitado nao eh valido" << endl << "Utilize apenas letras e espacos em branco. " << endl;
            this->~Empregado();
        }
        else
        nome = val;

        }

        void Empregado::Setcpf(string val)
        {
        int check=0;
        if (val.size() == 11)
        {
        for (int j = 0; j < val.size(); j++){
                 if(!(val[j] <= '9' && val[j] >= '0'))                /**essa linha faz soh poder ter numeros */
                check = 1;
        }
            if(check != 0)     /**checa as propriedades da string dada e se as restricoes n forem cumpridas pede uma nova string e chama a funcao novamente */
        {
            cout << "O CPF nao eh valido" << endl << "Utilize apenas numeros." << endl;

        }
        else
        cpf = val;
        }
        else
        {
        cout << "O CPF nao eh valido" << endl << "O cpf deve conter 11 numeros." << endl;
        }
        }

        void Empregado::SetdataNasc(string val)
        {
        int check=0;
        if (val.size() == 10)
        {
        if(!(val[0] <= '9' && val[0] >= '0' && val[1] <= '9' && val[1] >= '0' && val[3] <= '9' && val[3] >= '0' && val[4] <= '9' && val[4] >= '0' && val[6] <= '9' && val[6] >= '0' && val[7] <= '9' && val[7] >= '0' && val[8] <= '9' && val[8] >= '0' && val[9] <= '9' && val[9] >= '0' &&val[2] == '/' && val[5] == '/'))
        {                                                                                                                                                                           /**essa linha checa se a data esta no formato DD/MM/AAAA */
        check = 1;
        }
            if(check != 0)     /**checa as propriedades da string dada e se as restricoes n forem cumpridas pede uma nova string e chama a funcao novamente */
        {
            cout << "A data de nascimento nao eh valida" << endl << "Utilize apenas numeros e barras e ela deve estar no seguinte formato DD/MM/AAAA." << endl;

        }
        else
        dataNasc = val;
        }
        else
        {
        cout << "A data de nascimento nao eh valida" << endl << "Utilize apenas numeros e barras e ela deve estar no seguinte formato DD/MM/AAAA." << endl;
        }
        }

        void Empregado::SetdataEntradaEmpresa(string val)
        {
        int check=0;
        if (val.size() == 10)
        {
        if(!(val[0] <= '9' && val[0] >= '0' && val[1] <= '9' && val[1] >= '0' && val[3] <= '9' && val[3] >= '0' && val[4] <= '9' && val[4] >= '0' && val[6] <= '9' && val[6] >= '0' && val[7] <= '9' && val[7] >= '0' && val[8] <= '9' && val[8] >= '0' && val[9] <= '9' && val[9] >= '0' &&val[2] == '/' && val[5] == '/'))
        {                                                                                                                                                                           /**essa linha checa se a data esta no formato DD/MM/AAAA */
        check = 1;
        }
            if(check != 0)     /**checa as propriedades da string dada e se as restricoes n forem cumpridas pede uma nova string e chama a funcao novamente */
        {
            cout << "A data de nascimento nao eh valida" << endl << "Utilize apenas numeros e barras e ela deve estar no seguinte formato DD/MM/AAAA." << endl;

        }
        else
        dataEntradaEmpresa = val;
        }
        else
        {
        cout << "A data de nascimento nao eh valida" << endl << "Utilize apenas numeros e barras e ela deve estar no seguinte formato DD/MM/AAAA." << endl;
        }
        }
