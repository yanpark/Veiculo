#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Veiculo.h"
#include"Terrestre.h"
#include"Caminhao.h"
#include"Carga.h"

using namespace std;

Caminhao::Caminhao(){
	
    rodas = 0;
    peso = 0;
}


Caminhao::Caminhao(const string &marca, string motor, string cor, const string &combustivel):Terrestre(marca,motor,cor,combustivel){
    
    this->rodas = 4;
    this->peso = 3000;
    this->velocidadeMax = 200;
    this->dimensaoAlt = 5;
    this->dimensaoLarg = 3;
}

Caminhao::~Caminhao(){
}

bool Caminhao::operator==(const Caminhao &outroCaminhao) const{
	
	if(marca != outroCaminhao.marca) return false;
	if(motor != outroCaminhao.motor) return false;
	if(cor != outroCaminhao.cor) return false;
	if(combustivel != outroCaminhao.combustivel) return false;
	if(velocidadeInicial != outroCaminhao.velocidadeInicial) return false;
    if(velocidadeAtual != outroCaminhao.velocidadeAtual) return false;
	if(veiculoLigado != outroCaminhao.veiculoLigado) return false;
    if(volante != outroCaminhao.volante) return false;
    if(rodas != outroCaminhao.rodas) return false;
	if(peso != outroCaminhao.peso) return false;
    if(velocidadeMax != outroCaminhao.velocidadeMax) return false;
    if(dimensaoAlt != outroCaminhao.dimensaoAlt) return false;
    if(dimensaoLarg != outroCaminhao.dimensaoLarg) return false;
	return true;
}

void Caminhao::transportarCarga(){
    
    carga.verificarCarga(carga);
    carga.tipoCarga();
    carga.numDeCargas();
}

void Caminhao::acelerar(){
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

int Caminhao::freiar(int velocidadeAtual){
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