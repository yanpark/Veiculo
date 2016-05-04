#include <iostream>
#include <string>

#ifndef VEICULO_H
#define VEICULO_H

using namespace std;

class Veiculo{
	
    friend ostream &operator<<(ostream &, const Veiculo &);
    
    public:
        
        Veiculo();
        Veiculo(const string &, string, string, const string &);
	    Veiculo(const Veiculo &);
	    ~Veiculo();

        static const void statusVeiculo(const Veiculo &);
        static void numeroDeVeiculos();
        virtual void dirigir() = 0;
        virtual void acelerar() = 0;
		virtual int freiar(int) = 0;
		
		const Veiculo &operator=(const Veiculo &);
		bool operator==(const Veiculo &) const;
		
	protected:
		string marca;
        string motor;
        string cor;
        string combustivel;
        bool veiculoLigado;
		double peso;
	    int velocidadeInicial;
	    int velocidadeAtual;
        int velocidadeMax;
        int opcao;
	    static int quantVeiculos;
};
#endif

