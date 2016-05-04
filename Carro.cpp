#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Veiculo.h"
#include"Terrestre.h"
#include"Carro.h"
#include"Pessoa.h"
#include"Dono.h"
#include"Cliente.h"

using namespace std;

Carro::Carro(){
	
    rodas = 0;
    peso = 0;
}


Carro::Carro(const string &marca, string motor, string cor, const string &combustivel):Terrestre(marca,motor,cor,combustivel){
    
    this->rodas = 4;
    this->peso = 1000;
    this->velocidadeMax = 200;
    vendaECompra();
}

Carro::~Carro(){
}

void Carro::vendaECompra(){
    
    cl.venderVeiculo();
}

bool Carro::operator==(const Carro &outroCarro) const{
	
	if(marca != outroCarro.marca) return false;
	if(motor != outroCarro.motor) return false;
	if(cor != outroCarro.cor) return false;
	if(combustivel != outroCarro.combustivel) return false;
	if(velocidadeInicial != outroCarro.velocidadeInicial) return false;
    if(velocidadeAtual != outroCarro.velocidadeAtual) return false;
	if(veiculoLigado != outroCarro.veiculoLigado) return false;
    if(volante != outroCarro.volante) return false;
    if(rodas != outroCarro.rodas) return false;
	if(peso != outroCarro.peso) return false;
    if(velocidadeMax != outroCarro.velocidadeMax) return false;
	return true;
}

void Carro::acelerar(){
    int aux;
	
	aux = velocidadeAtual;
	cout << "\nAcelerar velocidade de " << velocidadeAtual << " a " << velocidadeMax << " km/h: ";
	cin >> velocidadeAtual;
	if(velocidadeAtual <= aux || velocidadeAtual > velocidadeMax){
		velocidadeAtual = aux;
		system("cls");
		cout << "Aceleracao invalida.\nFavor acelerar velocidade entre " << velocidadeAtual << " a " << velocidadeMax << " km/h" << endl;
	}
    else{
        regrasDeTransito();
    }
	cout << "\nVelocidade atual de " << velocidadeAtual  << " km/h\n" << endl;
	system("pause");
}

int Carro::freiar(int velocidadeAtual){
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
    if(velocidadeAtual != velocidadeInicial){
        regrasDeTransito();
    }
	cout << "\nVelocidade atual de " << velocidadeAtual  << " km/h\n" << endl;
	system("pause>>null");
	return velocidadeAtual;
}