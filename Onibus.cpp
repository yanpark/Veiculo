#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include"Veiculo.h"
#include"Terrestre.h"
#include"Onibus.h"

using namespace std;

Onibus::Onibus(){
	
    rodas = 0;
    peso = 0;
    numPassageiros = 0;
    maxPassageiros = 0;
    novosPassageiros = 0;
    passageirosSaindo = 0;
}


Onibus::Onibus(const string &marca, string motor, string cor, const string &combustivel):Terrestre(marca,motor,cor,combustivel){
    
    this->rodas = 4;
    this->peso = 3000;
    this->numPassageiros = 0;
    this->velocidadeMax = 150;
    this->maxPassageiros = 50;
}

Onibus::~Onibus(){
}

bool Onibus::operator==(const Onibus &outroOnibus) const{
	
	if(marca != outroOnibus.marca) return false;
	if(motor != outroOnibus.motor) return false;
	if(cor != outroOnibus.cor) return false;
	if(combustivel != outroOnibus.combustivel) return false;
	if(velocidadeInicial != outroOnibus.velocidadeInicial) return false;
    if(velocidadeAtual != outroOnibus.velocidadeAtual) return false;
	if(veiculoLigado != outroOnibus.veiculoLigado) return false;
    if(volante != outroOnibus.volante) return false;
    if(rodas != outroOnibus.rodas) return false;
	if(peso != outroOnibus.peso) return false;
    if(velocidadeMax != outroOnibus.velocidadeMax) return false;
    if(numPassageiros != outroOnibus.numPassageiros) return false;
    if(maxPassageiros != outroOnibus.maxPassageiros) return false;
	return true;
}

void Onibus::paradaDeOnibus(){
    int parada; // 0 - Seguir em frente, 1 - Entrar novos passageiros, 2 - Descer passageiros, 3 - 1 e 2 juntos
    
    system("cls");
    cout << "Parada de onibus a frente...\n\n";
    parada = rand()%4;
    if(parada==0){
        cout << "Sem entrada ou saida de passageiros. Seguir em frente...\n\n";
        system("pause");
    }
    else if(parada==1 && numPassageiros < maxPassageiros){
        cout << "Parando! Novos passageiros para entrar...\n\n";
        velocidadeAtual = 0;
        system("pause>>null");
        entrarPassageiros();
        cout << "Total de Passageiros = " << numPassageiros << endl << endl;
        acelerar();
    }
    else if(parada==2 && numPassageiros > 0){
        cout << "Parando! Passageiros para sair...\n\n";
        velocidadeAtual = 0;
        system("pause>>null");
        sairPassageiros();
        cout << "Total de Passageiros = " << numPassageiros << endl << endl;
        acelerar();
    }
    else if(parada==3 && (numPassageiros < maxPassageiros && numPassageiros > 0)){
        cout << "Parando! Passageiros para entrar e sair...\n\n";
        velocidadeAtual = 0;
        system("pause>>null");
        entrarPassageiros();
        sairPassageiros();
        cout << "Total de Passageiros = " << numPassageiros << endl << endl;
        acelerar();
    }
}

void Onibus::entrarPassageiros(){
    
    system("cls");
    novosPassageiros = rand()%maxPassageiros+1;
    if(maxPassageiros < numPassageiros+novosPassageiros){
        novosPassageiros = maxPassageiros-numPassageiros;
    }
    cout << novosPassageiros << " passageiros entraram\n\n";
    numPassageiros += novosPassageiros;
}

void Onibus::sairPassageiros(){
    
    system("cls");
    passageirosSaindo = rand()%numPassageiros+1;
    cout << passageirosSaindo << " passageiros saindo do onibus\n\n";
    numPassageiros -= passageirosSaindo;
}

void Onibus::acelerar(){
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
    paradaDeOnibus();
}

int Onibus::freiar(int velocidadeAtual){
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
    if(velocidadeAtual != 0){
        paradaDeOnibus();
    }
	return velocidadeAtual;
}