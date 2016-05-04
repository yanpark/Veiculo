#include <time.h>
#include"Pessoa.h"
#include"Dono.h"

using namespace std;

Dono::Dono(){
}

Dono::Dono(const string &nome, int cpf, int telefone):Pessoa(nome,cpf,telefone){
    
    this->dinheiro = 700000.00;
}

Dono::~Dono(){
}

void Dono::venderVeiculo(){
    
    cout << "Vender veiculo? < 1 - Sim / 0 - Nao >: ";
    cin >> venda;
    if(venda){
        cout << "\nTransacao efetuada com sucesso\n\n";
    }
}