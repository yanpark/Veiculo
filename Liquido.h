#include <iostream>
#include <string>
#include"Carga.h"

#ifndef LIQUIDO_H
#define LIQUIDO_H

using namespace std;

class Liquido : public Carga{
	
    friend ostream &operator<<(ostream &, const Liquido &);
    
    public:
        Liquido();
	    Liquido(const string &, string, string);
		~Liquido();
		
        virtual void tipoCarga();
        
		const Liquido &operator=(const Liquido &);
		bool operator==(const Liquido &) const;
		
    protected:
	    double volume;
};
#endif