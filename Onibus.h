#include <iostream>
#include <string>

#include"Veiculo.h"
#include"Terrestre.h"

#ifndef ONIBUS_H
#define ONIBUS_H

using namespace std;

class Onibus : public Terrestre{
	
    friend ostream &operator<<(ostream &, const Onibus &);
    
    public:
        Onibus();
	    Onibus(const string &, string, string, const string &);
		~Onibus();
		
        virtual void acelerar();
        virtual int freiar(int);
        void paradaDeOnibus();
        void entrarPassageiros();
        void sairPassageiros();
		const Onibus &operator=(const Onibus &);
		bool operator==(const Onibus &) const;
		
    private:
        int novosPassageiros;
        int passageirosSaindo;
	    int numPassageiros;
        int maxPassageiros;
};
#endif