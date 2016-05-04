#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include"Pessoa.h"
#include"Cliente.h"

using namespace std;

int Cliente::numeroDeClientes = 0;

Cliente::Cliente(){
    endereco = "Nenhum";
}

Cliente::Cliente(const string &nome, int cpf, int telefone):Pessoa(nome,cpf,telefone){
    
    this->dinheiro = 80000.00;
    this->endereco = "Rua dos Alfeneiros 380";
    numeroDeClientes++;
}

Cliente::~Cliente(){
}

const void Cliente::dadosDoCliente(const Cliente &c){
    
    cout << "\n                         Informacoes da Carga\n\n";
	cout << setw(38) << "Nome " << setw(5) << c.nome <<'\n';
    cout << setw(38) << "CPF " << setw(5) << c.cpf <<'\n';
	cout << setw(38) << "Telefone " << setw(5) << c.telefone <<'\n';
	cout << setw(38) << "Dinheiro " << setw(5) << c.dinheiro <<'\n';
    cout << setw(38) << "Endereco " << setw(5) << c.endereco <<'\n\n';
}

void Cliente::informarQuantClientes(){
    
    cout << "\n\nNumero de clientes = " << numeroDeClientes << endl << endl;
}
