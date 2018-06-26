#ifndef TRABALHO5_JOGO_H
#define TRABALHO5_JOGO_H

#include <iostream>
#include <string>

using  namespace std;

class Jogo
{
public:

    Jogo(int id = 0, string categoria = " ", string plataforma = " ", string titulo = " ", float preco = 0.0):id(id), categoria(categoria),
                                                                                                              plataforma(plataforma), titulo(titulo),
                                                                                                              preco(preco){}

    int GetId()
    {
        return this->id;
    }
    string GetNome()
    {
        return this->titulo;
    }
    string GetCategoria()
    {
        return this->categoria;
    }
    string GetPlataforma()
    {
        return this->plataforma;
    }
    float GetPreco()
    {
        return this->preco;
    }
    int GetQuantidade()
    {
        return this->quantidade;
    }

    void Imprime()
    {
        cout<<"Id: "<<this->id<<endl;
        cout<<"Nome: "<<this->titulo<<endl;
        cout<<"Categoria: "<<this->categoria<<endl;
        cout<<"Plataforma: "<<this->plataforma<<endl;
        cout<<"Preço: "<<this->preco<<endl;
        cout<<"Quantidade: "<<this->quantidade<<endl;
    }

    friend ostream &operator<<(ostream &out, Jogo &jogo) {
        out << jogo.id << "\n";
        out << jogo.preco << "\n";
        out << jogo.categoria << "\n";
        out << jogo.plataforma << "\n";
        out << jogo.titulo << "\n";
        out << jogo.quantidade;
        return out;
    }

    friend istream &operator>>(istream &in, Jogo &jogo)
    {
        in >> jogo.id
           >> jogo.preco
           >> jogo.categoria
           >> jogo.plataforma
           >> jogo.titulo
           >> jogo.quantidade;
        return in;
    }

private:

    int id;
    string categoria;
    string plataforma;
    string titulo;
    float preco;
    int quantidade;
};

#endif //TRABALHO5_JOGO_H
