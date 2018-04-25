//
// Created by dedad on 12/04/2018.
//

#ifndef _PILHA_
#define _PILHA_

#include<iostream>
#include<string>

using namespace std;

class Pilha
{
public:

    Pilha() : pilha(new string[100]), numItens(0), tamPilha(100)
    {
        cout<<"Construtor 1"<<endl;
    }

    Pilha(int tamanho) : pilha(new string[tamanho+1]), numItens(0), tamPilha(tamanho)
    {
        cout<<"Construtor 2"<<endl;
    }

    virtual ~Pilha()
    {
        cout<<"Destrutor"<<endl;
        delete pilha;
    }

    inline bool PilhaCheia()
    {
        return this->numItens >= this->tamPilha? true : false;
    }

    inline bool PilhaVazia()
    {
        return this->numItens <= 0? true : false;
    }

    inline void Empilha(string valor)
    {
        if(!this->PilhaCheia())
        {
            cout<<"Empilhando "<<valor<<endl;
            this->pilha[this->numItens++] = valor;
        }
    }

    inline string Desempilha()
    {
        if(!PilhaVazia())
        {
            string topo = pilha[numItens - 1];
            cout << "Desempilhando: " << topo << endl;

            --numItens;

            return topo;
        } else
        {
            return "";
        }
    }

    void operator +=(string valor)
    {
        Empilha(valor);
    }

    string operator --(int c)
    {
        return Desempilha();
    }

    inline int Tamanho()
    {
        return this->numItens;
    }

    const void Imprime()
    {
        cout<<"Pilha: [";
        int i;
        for(i = 0; i < this->numItens; i++)
        {
            cout<<this->pilha[i];
        }
        cout<<"]\n"<<endl;
    }


private:

    string *pilha;
    int numItens;
    int tamPilha;
};

#endif
