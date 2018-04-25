//
// Created by dedad on 04/04/2018.
//

#ifndef _CARRO_H_
#define _CARRO_H_

#include"Veiculo.h"

class Carro : public Veiculo
{
public:

    Carro() : Veiculo("", 0.0, 0, 0.0), modelo(""), cor(""){}

    Carro(string modelo, string cor, string placa, float peso, int veloc, float preco) :
            Veiculo(placa, peso, veloc, preco),
            modelo(modelo),
            cor(cor){}

    virtual ~Carro(){}

    virtual inline string GetModelo() { return this->modelo; }
    virtual inline string GetCor() { return this->cor; }

    virtual inline void SetModelo(string modelo) { this->modelo = modelo; }
    virtual inline void SetCor(string cor) { this->cor = cor; }

    inline virtual void Imprime()
    {
        cout<<"Modelo: "<<this->modelo<<endl;
        cout<<"Cor: "<<this->cor<<endl;
        Veiculo::Imprime();
    }

protected:

    string modelo;
    string cor;
};

#endif //_CARRO_H_
