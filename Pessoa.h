#include <iostream>
#include <string>

#ifndef PESSOA_H
#define PESSOA_H

using namespace std;

class Pessoa{
	
    friend ostream &operator<<(ostream &, const Pessoa &);
    
    public:
        Pessoa();
	    Pessoa(const string &, int, int);
		~Pessoa();
        
        void statusPessoa();
        
		const Pessoa &operator=(const Pessoa &);
		bool operator==(const Pessoa &) const;
		
    protected:
	    string nome;
        int cpf;
        int telefone;
        double dinheiro;
};
#endif