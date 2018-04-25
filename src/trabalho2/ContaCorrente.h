#ifndef _CONTACORRENTE_H_
#define _CONTACORRENTE_H_

#include "Conta.h"

class ContaCorrente : public Conta
{
public:

    //Construtor com atributos
    ContaCorrente(int numero, Cliente cliente) : Conta(numero, cliente) {}

    //Construtor vazio
    ContaCorrente() : Conta() {}

    //métodos
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
        contaDestino.Deposita(valor);
        this->saldo -= valor;
    };
    inline void const Extrato()
    {
        cout<<"Extrato: "<<this->saldo<<endl;
    };
    inline void AplicaJurosDiarios(int dias)
    {
        saldo *= 10000000;
        for(int i = 0; i < dias; i++)
        {
            Deposita(saldo * 0.0001);
        }
        saldo /= 10000000;
    };

private:

};


#endif //_CONTACORRENTE_H_
