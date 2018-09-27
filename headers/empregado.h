#ifndef _EMPREGADO_H_
#define _EMPREGADO_H_

#include <string>

using namespace std;

class Empregado {
private:
	int id, salario, idade;
	string nome, dataNascimento, dataAdmissao, cpf; 
	
public:
	Empregado (int id, string nome, int idade, string dataNascimento, string dataAdmissao, string cpf, int salario);
	int getId();
	string getNome();
	int getIdade();
	string getDataNascimento();
	string getDataAdmissao();
	string getCPF();
	int getSalario();
	void setId(int id);
	void setNome(string nome);
	void setIdade(int idade);
	void setDataNascimento(string dataNascimento);
	void setDataAdmissao(string dataAdmissao);
	void setCPF(string cpf);
	void setSalario(int salario);
};

#endif