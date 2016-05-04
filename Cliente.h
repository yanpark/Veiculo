#include <iostream>
#include <string>
#include"Pessoa.h"

#ifndef CLIENTE_H
#define CLIENTE_H

using namespace std;

class Cliente : public Pessoa{
	
    friend ostream &operator<<(ostream &, const Cliente &);
    
    public:
        Cliente();
	    Cliente(const string &, int, int);
		~Cliente();
        
        const static void dadosDoCliente(const Cliente &);
        static void informarQuantClientes();
        
		const Cliente &operator=(const Cliente &);
		bool operator==(const Cliente &) const;
		
    protected:
	    string endereco;
        static int numeroDeClientes;
};
#endif