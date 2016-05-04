#include <iostream>
#include <string>
#include"Pessoa.h"

#ifndef DONO_H
#define DONO_H

using namespace std;

class Dono : public Pessoa{
	
    friend ostream &operator<<(ostream &, const Dono &);
    
    public:
        Dono();
	    Dono(const string &, int, int);
		~Dono();
        
        void venderVeiculo();
        
		const Dono &operator=(const Dono &);
		bool operator==(const Dono &) const;
		
    protected:
	   bool venda; 
};
#endif