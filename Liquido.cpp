#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Carga.h"
#include"Liquido.h"

using namespace std;

Liquido::Liquido(){
}


Liquido::Liquido(const string &nome, string origem, string destino):Carga(nome,origem,destino){
    
    this->volume = 2000.00;
}

Liquido::~Liquido(){
}

void Liquido::tipoCarga(){
    
    cout << "\n\nVolume = " << volume << endl << endl;
}