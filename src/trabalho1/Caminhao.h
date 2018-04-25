//
// Created by dedad on 05/04/2018.
//

#ifndef _CAMINHAO_
#define _CAMINHAO_

#include "Veiculo.h"

class Caminhao : public Veiculo
{
public:

    Caminhao() : comprimento(0.0), capacidade(0.0), altura(0.0), Veiculo("", 0.0, 0, 0.0){}

    Caminhao(float capacidade, float comprimento, float altura, string placa, float peso, int veloc, float preco) :
            Veiculo(placa, peso, veloc, preco),
            capacidade(capacidade),
            comprimento(comprimento),
            altura(altura){}

    virtual ~Caminhao(){}

    virtual inline float GetCapacidade() { return this->capacidade; }
    virtual inline float GetComprimento() { return this->comprimento; }
    virtual inline float GetAltura() { return this->altura; }

    virtual inline void SetCapacidade(float capacidade) { this->capacidade = capacidade; }
    virtual inline void SetComprimento(float comprimento) { this->comprimento = comprimento; }
    virtual inline void SetAltura(float altura) { this->altura = altura; }

    inline virtual void Imprime()
    {
        cout<<"Comprimento: "<<this->comprimento<<endl;
        cout<<"Capacidade Maxima: "<<this->capacidade<<endl;
        cout<<"Altura Maxima: "<<this->altura<<endl;
        Veiculo::Imprime();
    }

protected:

    float capacidade;
    float comprimento;
    float altura;
};

#endif //_CAMINHAO_H_
