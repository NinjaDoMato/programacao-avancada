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

    //Construtor
    Cliente(string nome) : nome(nome){}

    //Setter
    inline void setNome(string nome)
    {
        this->nome = nome;
    }

    //Getter
    inline string getNome()
    {
        return nome;
    }

private:

    string nome;
};

#endif //_CLIENTE_
