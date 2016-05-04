#include <iostream>
#include <string>
#include"Veiculo.h"

#ifndef TERRESTRE_H
#define TERRESTRE_H

using namespace std;

class Terrestre : public Veiculo{
	
    friend ostream &operator<<(ostream &, const Terrestre &);
    
    public:
        Terrestre();
	    Terrestre(const string &, string, string, const string &);
		~Terrestre();
		
        virtual void dirigir();
        virtual void acelerar();
		virtual int freiar(int);
        void girarVolante();
        void regrasDeTransito();
		
		const Terrestre &operator=(const Terrestre &);
		bool operator==(const Terrestre &) const;
		
	protected:
	    int rodas;
	    int volante;
};
#endif