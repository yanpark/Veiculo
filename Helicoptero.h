#include <iostream>
#include <string>

#include"Veiculo.h"
#include"Aereo.h"

#ifndef HELICOPTERO_H
#define HELICOPTERO_H

using namespace std;

class Helicoptero : public Aereo{
	
    friend ostream &operator<<(ostream &, const Helicoptero &);
    
    public:
        Helicoptero();
	    Helicoptero(const string &, string, string, const string &);
		~Helicoptero();
		
        virtual void acelerar();
        virtual int freiar(int);
		const Helicoptero &operator=(const Helicoptero &);
		bool operator==(const Helicoptero &) const;
		
	protected:
	    int numPassageiros;
        int maxPassageiros;
};
#endif