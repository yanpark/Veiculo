#include <iostream>
#include <string>

#ifndef CARGA_H
#define CARGA_H

using namespace std;

class Carga{
	
    friend ostream &operator<<(ostream &, const Carga &);
    
    public:
        Carga();
	    Carga(const string &, string, string);
		~Carga();
		
        const static void verificarCarga(const Carga &);
        static void numDeCargas();
        virtual void tipoCarga() = 0;
		
		const Carga &operator=(const Carga &);
		bool operator==(const Carga &) const;
		
	protected:
	    string nome;
        string origem;
        string destino;
        double peso;
        double valor;
        static int quantCargas;
};
#endif