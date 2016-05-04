#include <iostream>
#include <string>
#include"Veiculo.h"

#ifndef AEREO_H
#define AEREO_H

using namespace std;

class Aereo : public Veiculo{
	
    friend ostream &operator<<(ostream &, const Aereo &);
    
    public:
        Aereo();
	    Aereo(const string &, string, string, const string &);
		~Aereo();
		
        virtual void dirigir();
        virtual void acelerar();
		virtual int freiar(int);
        void controlarManche();
		
		const Aereo &operator=(const Aereo &);
		bool operator==(const Aereo &) const;
		
    protected:
	    int alturaMin;
	    int alturaMax;
        int alturaAtual;
        int manche;
};
#endif