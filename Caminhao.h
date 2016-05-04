#include <iostream>
#include <string>

#include"Veiculo.h"
#include"Terrestre.h"
#include"Carga.h"
#include"Unidade.h"
#include"Liquido.h"

#ifndef CAMINHAO_H
#define CAMINHAO_H

using namespace std;

class Caminhao : public Terrestre{
	
    friend ostream &operator<<(ostream &, const Caminhao &);
    
    public:
        Caminhao();
	    Caminhao(const string &, string, string, const string &);
		~Caminhao();
		
        virtual void acelerar();
        virtual int freiar(int);
        void transportarCarga();
        
		const Caminhao &operator=(const Caminhao &);
		bool operator==(const Caminhao &) const;
		
	private:
	    int dimensaoAlt;
        int dimensaoLarg;
        Unidade carga;
};
#endif