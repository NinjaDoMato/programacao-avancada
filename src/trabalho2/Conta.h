//
// Created by dedad on 05/04/2018.
//

#ifndef _CONTA_H_
#define _CONTA_H_

#include "Cliente.h"

class Conta
{
public:

    //Construtor vazio
    Conta() : numero(0), saldo(0.0), cliente("")
    {
        cout<<"Criando conta "<<numero<<" do cliente "<<cliente.getNome()<<endl;
    };
    
    //Construtor com atributos
    Conta(int numero, Cliente cliente) : numero(numero), saldo(0.0), cliente(cliente)
    {
        cout<<"Criando conta "<<numero<<" do cliente "<<cliente.getNome()<<endl;
    }

    //Métodos
    virtual inline void Deposita(float valor) = 0;
    virtual inline void Retira(float valor) = 0;
    virtual inline void Transfere(Conta &contaDestino, float valor) = 0;
    virtual inline void const Extrato() = 0;
    virtual inline void AplicaJurosDiarios(int dias) = 0;
   
protected:

    int numero;
    float saldo;
    Cliente cliente;

};

#endif //_CONTA_H_
