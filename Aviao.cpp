#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Veiculo.h"
#include"Aereo.h"
#include"Aviao.h"

using namespace std;

Aviao::Aviao(){
    peso = 0;
    numPassageiros = 0;
}


Aviao::Aviao(const string &marca, string motor, string cor, const string &combustivel):Aereo(marca,motor,cor,combustivel){
    
    this->alturaMin = 5000;
    this->alturaMax = 20000;
    this->peso = 20000;
    this->velocidadeMax = 1500;
    this->maxPassageiros = 80;
}

Aviao::~Aviao(){
}

void Aviao::acelerar(){
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

int Aviao::freiar(int velocidadeAtual){
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

void Aviao::embarqueDePassageiros(){
    
    do{
        cout << "Informe o numero de passageiros a embarcar no voo: ";
        cin >> numPassageiros;
        cout << "\n\n";
        if(numPassageiros <= 0 || numPassageiros > maxPassageiros){
            cout << "Quantidade invalida. Por favor, tente novamente...\n\n";
        }
    }
    while(numPassageiros <= 0 || numPassageiros > maxPassageiros);
    cout << "Numero de passageiros embarcados: " << numPassageiros << endl << endl;
}