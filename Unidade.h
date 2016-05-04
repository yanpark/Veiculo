#include <iostream>
#include <string>
#include"Carga.h"

#ifndef UNIDADE_H
#define UNIDADE_H

using namespace std;

class Unidade : public Carga{
	
    friend ostream &operator<<(ostream &, const Unidade &);
    
    public:
        Unidade();
	    Unidade(const string &, string, string);
		~Unidade();
		
        virtual void tipoCarga();
        
		const Unidade &operator=(const Unidade &);
		bool operator==(const Unidade &) const;
		
    protected:
	    int quantidade;
};
#endif