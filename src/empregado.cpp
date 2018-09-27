#ifndef _EMPREGADO_CPP_
#define _EMPREGADO_CPP_

#include "../headers/empregado.h"
#include <string>

using namespace std;

Empregado::Empregado (int id, string nome, int idade, string dataNascimento, string dataAdmissao, string cpf, int salario) {
	this->id = id;
	this->nome = nome;
	this->idade = idade;
	this->dataNascimento = dataNascimento;
	this->dataAdmissao = dataAdmissao;
	this->cpf = cpf;
	this->salario = salario;
}

int Empregado::getId() {
	return id;
}

string Empregado::getNome() {
	return nome;
}

int Empregado::getIdade() {
	return idade;
}

string Empregado::getDataNascimento() {
	return dataNascimento;
}

string Empregado::getDataAdmissao() {
	return dataAdmissao;
}

string Empregado::getCPF() {
	return cpf;
}

int Empregado::getSalario() {
	return salario;
}

void Empregado::setId(int id) {
	this->id = id;
}

void Empregado::setNome(string nome) {
	this->nome = nome;
}

void Empregado::setIdade(int idade) {
	this->idade = idade;
}

void Empregado::setDataNascimento(string dataNascimento) {
	this->dataNascimento = dataNascimento;
}

void Empregado::setDataAdmissao(string dataAdmissao) {
	this->dataAdmissao = dataAdmissao;
}

void Empregado::setCPF(string cpf) {
	this->cpf = cpf;
}

void Empregado::setSalario(int salario) {
	this->salario = salario;
}

#endif