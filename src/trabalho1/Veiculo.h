//
// Created by dedad on 04/04/2018.
//

#ifndef _VEICULO_H_
#define _VEICULO_H_

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Veiculo
{
public:

    Veiculo() : placa(""), peso(0.0), velocidadeMaxima(0), preco(0.0){}

    Veiculo(string placa, float peso, int velocidadeMaxima, float preco) :
            placa(placa),
            peso(peso),
            velocidadeMaxima(velocidadeMaxima),
            preco(preco){}

    virtual ~Veiculo(){}

    virtual inline string GetPlaca(){return this->placa;};
    virtual inline float GetPeso(){return this->peso;};
    virtual inline int GetVelocidade(){return this->velocidadeMaxima;};
    virtual inline float GetPreco(){return this->preco;};

    virtual inline void SetPlaca(string placa){this->placa = placa;};
    virtual inline void SetPeso(float peso){this->peso = peso > 0? peso : this->peso;};
    virtual inline void SetVelocidade(int veloc){this->velocidadeMaxima = veloc > 0? veloc : this->velocidadeMaxima;};
    virtual inline void SetPreco(float preco){this->preco = preco > 0? preco : this->velocidadeMaxima ;};

    inline void Imprime()
    {
        cout<<"Placa: "<<this->placa<<endl;
        cout<<"Peso: "<<this->peso<<endl;
        cout<<"Preço: "<<this->preco<<endl;
        cout<<"Velocidade Máxima: "<<this->velocidadeMaxima<<endl;
    }

protected:
    string placa;
    float peso;
    int velocidadeMaxima;
    float preco;
};


#endif //_VEICULO_H_
