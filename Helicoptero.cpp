#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Veiculo.h"
#include"Aereo.h"
#include"Helicoptero.h"

using namespace std;

Helicoptero::Helicoptero(){
    peso = 0;
}


Helicoptero::Helicoptero(const string &marca, string motor, string cor, const string &combustivel):Aereo(marca,motor,cor,combustivel){
    
    this->alturaMin = 2000;
    this->alturaMax = 4000;
    this->peso = 7000;
    this->velocidadeMax = 700;
    this->maxPassageiros = 4;
}

Helicoptero::~Helicoptero(){
}

void Helicoptero::acelerar(){
    int aux;
	
	aux = velocidadeAtual;
	cout << "\nAcelerar velocidade de " << velocidadeAtual << " a " << velocidadeMax << " km/h: ";
	cin >> velocidadeAtual;
	if(velocidadeAtual <= aux || velocidadeAtual > velocidadeMax){
		velocidadeAtual = aux;
		system("cls");
		cout << "Aceleracao invalida.\nFavor acelerar velocidade entre " << velocidadeAtual << " a " << velocidadeMax << " km/h" << endl;
	}
	cout << "\nVelocidade atual de " << velocidadeAtual  << " km/h\n" << endl;
	system("pause");
}

int Helicoptero::freiar(int velocidadeAtual){
    int aux;
	
	aux = velocidadeAtual;
	if(opcao!=0){
		cout << "\nFreiar velocidade de " << velocidadeInicial << " a " << velocidadeAtual << " km/h: ";
		cin >> velocidadeAtual;
	}
	if(velocidadeAtual > aux || velocidadeAtual < velocidadeInicial){
		velocidadeAtual = aux;
		system("cls");
		cout << "Freio invalido.\nFavor freiar velocidade entre " << velocidadeInicial << " a " << velocidadeAtual << " km/h" << endl;
	}
	cout << "\nVelocidade atual de " << velocidadeAtual  << " km/h\n" << endl;
	system("pause>>null");
	return velocidadeAtual;
}
