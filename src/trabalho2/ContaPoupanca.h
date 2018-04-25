#ifndef _CONTAPOUPANCA_H_
#define _CONTAPOUPANCA_H_

#include "Conta.h"

class ContaPoupanca : public Conta
{
public:

    //Construtor com atributos
    ContaPoupanca(int numero, Cliente cliente) : Conta(numero, cliente) {}
    
    //Construtor vazio
    ContaPoupanca() : Conta() {}

    //Métodos
    inline void Deposita(float valor)
    {
        saldo += valor;
    };
    inline void Retira(float valor)
    {
        saldo -= valor;
    };
    inline void Transfere(Conta &contaDestino, float valor)
    {
        if(this->saldo >= valor)
        {
            contaDestino.Deposita(valor);
            this->saldo -= valor;
        }
    };
    inline void const Extrato()
    {
        cout<<"Extrato: "<<this->saldo<<endl;
    };
    inline void AplicaJurosDiarios(int dias)
    {
        saldo *= 1000000;
        for(int i = 0; i < dias; i++)
        {
            Deposita(saldo * 0.0008);
        }
        saldo /= 1000000;
    };

private:

};


#endif
