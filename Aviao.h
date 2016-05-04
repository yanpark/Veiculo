#include <iostream>
#include <string>

#include"Veiculo.h"
#include"Aereo.h"

#ifndef AVIAO_H
#define AVIAO_H

using namespace std;

class Aviao : public Aereo{
	
    friend ostream &operator<<(ostream &, const Aviao &);
    
    public:
        Aviao();
	    Aviao(const string &, string, string, const string &);
		~Aviao();
		
        virtual void acelerar();
        virtual int freiar(int);
        void embarqueDePassageiros();
        
		const Aviao &operator=(const Aviao &);
		bool operator==(const Aviao &) const;
		
    protected:
	    int numPassageiros;
        int maxPassageiros;
};
#endif