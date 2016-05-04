#include <stdlib.h>
#include <time.h>

#include"Veiculo.h"
#include"Aereo.h"

using namespace std;

Aereo::Aereo(){
    alturaMin = 0;
    alturaMax = 0;
}

Aereo::~Aereo(){
}

Aereo::Aereo(const string &marca, string motor, string cor, const string &combustivel):Veiculo(marca,motor,cor,combustivel){
    
    this->alturaAtual = 0;
    this->manche = 0;
}

void Aereo::dirigir(){
    int aux = alturaMin;
    
    numeroDeVeiculos();
	veiculoLigado = true;
	if(veiculoLigado){
		cout << "Veiculo ligado\n" << endl;
        alturaAtual = alturaMin;
		cout << "Altura atual = " << alturaAtual << " pes\n\n";
        system("pause");
		do{
			system("cls");
			cout << "1. Acelerar" << endl;
	        cout << "2. Freiar" << endl;
            cout << "3. Manter velocidade" << endl;
            cout << "4. Girar volante" << endl;
            cout << "5. Ganhar altitude" << endl;
            cout << "6. Perder altitude" << endl;
	        cout << "0. Desligar" << endl;
	        cout << "\nEscolha uma das opcoes acima: ";
	        cin >> opcao;
            system("cls");
	        switch(opcao){
	            case 0: freiar(velocidadeInicial);
                        alturaAtual = 0;
						veiculoLigado = false;
	            		cout << "Veiculo desligado\n";
	                    break;
	            case 1: acelerar();
	                    break;
	            case 2: freiar(velocidadeAtual);
	                    break;
                case 3: cout << "\nVelocidade constante\n";
                        system("pause");
                        break;
                case 4: controlarManche();
                        break;
                case 5: do{
                            if(alturaAtual >= alturaMin && alturaAtual < alturaMax){
                                cout << "Informe o quanto deseja subir entre " << alturaAtual << " e " << alturaMax << ": ";
                                cin >> alturaAtual;
                                cout << "\n";
                                if(alturaAtual <= aux || alturaAtual > alturaMax){
                                    cout << "Opcao invalida. Tente novamente...\n\n";
                                    alturaAtual = aux;
                                }
                                else{
                                    aux = alturaAtual;
                                }
                                cout << "Altura atual = " << alturaAtual << endl << endl;
                            }
                        }
                        while(alturaAtual < aux && alturaAtual > alturaMax);
                        system("pause");
                        break;
                case 6: do{
                            if(alturaAtual > alturaMin && alturaAtual < alturaMax){
                                cout << "Informe o quanto deseja descer entre " << alturaMin << " e " << alturaAtual << ": ";
                                cin >> alturaAtual;
                                cout << "\n";
                                if(alturaAtual < alturaMin || alturaAtual >= aux){
                                    cout << "Opcao invalida. Tente novamente...\n\n";
                                    alturaAtual = aux;
                                }
                                else{
                                    aux = alturaAtual;
                                }
                                cout << "Altura atual = " << alturaAtual << endl << endl;
                            }
                        }
                        while(alturaAtual < alturaMin || alturaAtual > aux);
                        system("pause");
                        break;
	            default: cout << "\nOpcao invalida. Tente novamente...\n" << endl;
                        system("pause");
	                     break;
	        }
	    }
	    while(opcao!=0);
    }	
}

void Aereo::acelerar(){
}

int Aereo::freiar(int){
}

void Aereo::controlarManche(){
    
    system("cls");
    cout << "1. Girar pra direita" << endl;
    cout << "2. Girar pra esquerda" << endl << endl;
    cout << "Escolha uma das opcoes acima: ";
    cin >> manche;
    cout << "\n\n";
    switch(manche){
        case 1: cout << "Veiculo virou a direita\n" << endl;
                break;
        case 2: cout << "Veiculo virou a esquerda\n" << endl;
                break;
        default: cout << "Opcao invalida.\n" << endl;
                break;
    }
    system("pause");
}