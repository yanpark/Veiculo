#include <iostream>
#include <string>

#include"Veiculo.h"
#include"Terrestre.h"
#include"Pessoa.h"
#include"Dono.h"
#include"Cliente.h"

#ifndef CARRO_H
#define CARRO_H

using namespace std;

class Carro : public Terrestre{
	
    friend ostream &operator<<(ostream &, const Carro &);
    
    public:
        Carro();
	    Carro(const string &, string, string, const string &);
		~Carro();
		
        virtual void acelerar();
        virtual int freiar(int);
        void vendaECompra();
        
		const Carro &operator=(const Carro &);
		bool operator==(const Carro &) const;
		
    private:
        Dono cl;
};
#endif