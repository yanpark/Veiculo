#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Pessoa.h"

using namespace std;

Pessoa::Pessoa(){
    nome = "Nenhum";
    cpf = 0;
    telefone = 0;
    dinheiro = 0;
}

Pessoa::Pessoa(const string &nome, int cpf, int telefone){
    
    this->nome = nome;
    this->cpf = cpf;
    this->telefone = telefone;
    this->dinheiro = dinheiro;
}

Pessoa::~Pessoa(){
}

void Pessoa::statusPessoa(){
    
    cout << "\n                         Informacoes da Carga\n\n";
	cout << setw(38) << "Nome " << setw(5) << nome <<'\n';
    cout << setw(38) << "CPF " << setw(5) << cpf <<'\n';
	cout << setw(38) << "Telefone " << setw(5) << telefone <<'\n';
	cout << setw(38) << "Dinheiro " << setw(5) << dinheiro <<'\n\n';
}