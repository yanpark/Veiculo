#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Carga.h"

using namespace std;

int Carga::quantCargas = 0;

Carga::Carga(){
}


Carga::Carga(const string &nome, string origem, string destino){
    
    this->nome = nome;
    this->origem = origem;
    this->destino = destino;
    this->peso = peso;
    this->valor = valor;
    quantCargas++;
}

Carga::~Carga(){
}

const void Carga::verificarCarga(const Carga &c){
    cout << "\n                         Informacoes da Carga\n\n";
	cout << setw(38) << "Nome " << setw(5) << c.nome <<'\n';
    cout << setw(38) << "Origem " << setw(5) << c.origem <<'\n';
	cout << setw(38) << "Destino " << setw(5) << c.destino <<'\n';
	cout << setw(38) << "Peso " << setw(5) << c.peso <<'\n';
    cout << setw(38) << "Valor " << setw(5) << c.valor <<'\n' << endl;
}

void Carga::numDeCargas(){
    
    cout << "Quantidade de cargas: " << quantCargas << endl << endl;
}

void Carga::tipoCarga(){
}