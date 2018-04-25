//
// Created by dedad on 05/04/2018.
//

#ifndef _CAMINHONETE_H_
#define _CAMINHONETE_H_

#include "Carro.h"
#include "Caminhao.h"

class Caminhonete : public Carro, public Caminhao
{
public:

    Caminhonete(){}

    Caminhonete(string modelo, string cor, string placa, float capacidade, float comprimento, float altura, float peso, int veloc, float preco) :
            Carro(modelo, cor, placa, peso, veloc, preco),
            Caminhao(capacidade, comprimento, altura, placa, peso, veloc, preco){}

    virtual ~Caminhonete(){}

    inline void Imprime()
    {
        Carro::Imprime();
        cout<<"Comprimento: "<<this->comprimento<<endl;
        cout<<"Capacidade Maxima: "<<this->capacidade<<endl;
        cout<<"Altura Maxima: "<<this->altura<<endl;
    }

private:
};


#endif //_CAMINHONETE_H_
