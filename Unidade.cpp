#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Carga.h"
#include"Unidade.h"

using namespace std;

Unidade::Unidade(){
}

Unidade::Unidade(const string &nome, string origem, string destino):Carga(nome,origem,destino){
    
    this->quantidade = 50;
}

Unidade::~Unidade(){
}

void Unidade::tipoCarga(){

    cout << "\n\nUnidades = " << quantidade << endl << endl;
}