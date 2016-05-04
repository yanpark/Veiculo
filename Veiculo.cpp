#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include"Veiculo.h"

using namespace std;

int Veiculo::quantVeiculos = 0;

Veiculo::Veiculo(){
	
    marca = "Sem Nome";
    motor = "Nenhum";
    cor = "Nenhuma";
    combustivel = "Nenhum";
    velocidadeInicial = 0;
    velocidadeAtual = 0;
    velocidadeMax = 0;
    veiculoLigado = false;
}

Veiculo::Veiculo(const string &marca, string motor, string cor, const string &combustivel){
    
    this->marca = marca;
    this->motor = motor;
    this->cor = cor;
    this->combustivel = combustivel;
    this->velocidadeInicial = 0;
    this->velocidadeAtual = 0;
    this->veiculoLigado = false;
    quantVeiculos++;
    srand(time(NULL));
}

Veiculo::~Veiculo(){
}

bool Veiculo::operator==(const Veiculo &outroVeiculo) const{
	
	if(marca != outroVeiculo.marca) return false;
	if(motor != outroVeiculo.motor) return false;
	if(cor != outroVeiculo.cor) return false;
	if(combustivel != outroVeiculo.combustivel) return false;
	if(velocidadeInicial != outroVeiculo.velocidadeInicial) return false;
    if(velocidadeAtual != outroVeiculo.velocidadeAtual) return false;
	if(veiculoLigado != outroVeiculo.veiculoLigado) return false;
	return true;
}

void Veiculo::dirigir(){
}

void Veiculo::acelerar(){
}

int Veiculo::freiar(int){
}

const void Veiculo::statusVeiculo(const Veiculo &v){
	
	cout << "\n                         Informacoes do Veiculo\n\n";
	cout << setw(38) << "Marca " << setw(5) << v.marca <<'\n';
    cout << setw(38) << "Motor " << setw(4) << v.motor <<'\n';
	cout << setw(38) << "Cor " << setw(9) << v.cor <<'\n';
	cout << setw(38) << "Combustivel " << setw(9) << v.combustivel <<'\n' << endl;
    cout << setw(38) << "Velocidade maxima " << setw(4) << v.velocidadeMax <<'\n' << endl;
}

void Veiculo::numeroDeVeiculos(){
    
    cout << "Numero de veiculos: " << quantVeiculos << endl << endl;
}