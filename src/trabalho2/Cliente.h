//
// Created by dedad on 05/04/2018.
//

#ifndef _CLIENTE_
#define _CLIENTE_

#include <iostream>
#include <string.h>

using namespace std;

class Cliente
{
public:

    Cliente(string nome) : nome(nome){}

    inline void setNome(string nome)
    {
        this->nome = nome;
    }

    inline string getNome()
    {
        return nome;
    }

private:

    string nome;
};

#endif //_CLIENTE_
