#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include"Terrestre.h"

using namespace std;

Terrestre::Terrestre(){
}

Terrestre::Terrestre(const string &marca, string motor, string cor, const string &combustivel):Veiculo(marca,motor,cor,combustivel){
    
    this->volante = 0;
}

Terrestre::~Terrestre(){
}

bool Terrestre::operator==(const Terrestre &outroTerrestre) const{
	
	if(marca != outroTerrestre.marca) return false;
	if(motor != outroTerrestre.motor) return false;
	if(cor != outroTerrestre.cor) return false;
	if(combustivel != outroTerrestre.combustivel) return false;
	if(velocidadeInicial != outroTerrestre.velocidadeInicial) return false;
    if(velocidadeAtual != outroTerrestre.velocidadeAtual) return false;
	if(veiculoLigado != outroTerrestre.veiculoLigado) return false;
    if(volante != outroTerrestre.volante) return false;
	return true;
}

void Terrestre::dirigir(){
    
    numeroDeVeiculos();
	veiculoLigado = true;
	if(veiculoLigado){
		cout << "Veiculo ligado" << endl;
		acelerar();
		do{
			system("cls");
			cout << "1. Acelerar" << endl;
	        cout << "2. Freiar" << endl;
            cout << "3. Manter velocidade" << endl;
            cout << "4. Girar volante" << endl;
	        cout << "0. Desligar" << endl;
	        cout << "\nEscolha uma das opcoes acima: ";
	        cin >> opcao;
	        switch(opcao){
	            case 0: freiar(velocidadeInicial);
						veiculoLigado = false;
	            		cout << "\nVeiculo desligado\n";
	                    break;
	            case 1: acelerar();
	                    break;
	            case 2: freiar(velocidadeAtual);
	                    break;
                case 3: cout << "\nVelocidade constante\n";
                        regrasDeTransito();
                        break;
                case 4: girarVolante();
                        break;
	            default: cout << "\nOpcao invalida. Tente novamente...\n" << endl;
                        system("pause");
	                     break;
	        }
	    }
	    while(opcao!=0);
    }	
}

void Terrestre::acelerar(){
}

int Terrestre::freiar(int){
}

void Terrestre::girarVolante(){
    
    system("cls");
    cout << "1. Girar pra direita" << endl;
    cout << "2. Girar pra esquerda" << endl << endl;
    cout << "Escolha uma das opcoes acima: ";
    cin >> volante;
    cout << "\n";
    switch(volante){
        case 1: cout << "Veiculo virou a direita\n" << endl;
                break;
        case 2: cout << "Veiculo virou a esquerda\n" << endl;
                break;
        default: cout << "Opcao invalida.\n" << endl;
                break;
    }
    system("pause");
}

void Terrestre::regrasDeTransito(){
    int semaforo; // 0 - Vermelho, 1 - Amarelo, 2 - Verde 
    
    system("cls");
    cout << "Semaforo a frente\n\n";
    semaforo = rand()%3;
    do{
        if(semaforo==0){
            cout << "Sinal vermelho. Parar!\nEsperando ficar verde...\n\n";
            system("pause>>null");
            semaforo = 2;
        }
        if(semaforo==1){
            cout << "Sinal amarelo. Reduzir velocidade...\n\n";
            system("pause>>null");
            semaforo = 0;
            
        }
        if(semaforo==2){
            cout << "Sinal verde. Prosseguir dirigindo...\n\n";
        }
    }
    while(semaforo!=2);
    system("pause");
}