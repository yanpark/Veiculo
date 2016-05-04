#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

#include"Veiculo.h"
#include"Terrestre.h"
#include"Aereo.h"

#include"Carro.h"
#include"Onibus.h"
#include"Caminhao.h"

#include"Aviao.h"
#include"Helicoptero.h"

#include"Carga.h"
#include"Unidade.h"
#include"Liquido.h"

#include"Pessoa.h"
#include"Dono.h"
#include"Cliente.h"

using namespace std;

int main(int argc, char **argv){
    
    vector < Carga * > cargas(2);
    
    cargas[0] = new Unidade("Melao","Belem","Salinas");
    cargas[1] = new Liquido("Gasolina","Rio de Janeiro","Niteroi");
    
    for(int i = 0; i < 5; i++){
        
        cargas[i] -> numDeCargas();
        cout << "\n\n";
        system("pause");
        system("cls");
    }
    
    vector < Pessoa * > pessoas(2);
    
    pessoas[0] = new Dono("Renato Ramos",4173821,98245728);
    pessoas[1] = new Cliente("Helton Andrade",7432936,986390861);
    
    for(int i = 0; i < 5; i++){
        
        pessoas[i] -> statusPessoa();
        cout << "\n\n";
        system("pause");
        system("cls");
    }
    
    vector < Veiculo * > veiculos(5);
    
    veiculos[0] = new Carro("Ferrari","AXL","Vermelho","Alcool");
    veiculos[1] = new Onibus("GOL","XKF","Branco","Gasolina");
    veiculos[2] = new Caminhao("Wolfswagem","VTW 450","Azul","Gasolina");
    veiculos[3] = new Aviao("TAM","GTR 290","Branco","Gasolina");
    veiculos[4] = new Helicoptero("Liteo","RXW","Preto","Gasolina");
    
    for(int i = 0; i < 5; i++){
        
        veiculos[i] -> dirigir();
        system("pause");
        system("cls");
    
        Caminhao*ptr3 = dynamic_cast < Caminhao *> (veiculos[i]);
        if(ptr3 != 0){
            ptr3 -> transportarCarga();
        }
        cout << endl << endl;
    }
    cargas.clear();
    pessoas.clear();
    veiculos.clear();
	return 0;
}
