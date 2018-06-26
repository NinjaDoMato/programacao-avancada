#ifndef TRABALHO1_MATRIZ_H
#define TRABALHO1_MATRIZ_H

#include<iostream>
#include<sstream>
#include<fstream>
#include<string>

using namespace std;

class Matriz
{
public:

    Matriz(int linhas, int colunas)
    {
        this->num_colunas = colunas;
        this->num_linhas = linhas;

        this->mat = new int*[linhas];

        for(int i = 0; i < linhas; i++)
        {
            mat[i] = new int[colunas];
        }

        for(int i = 0; i < linhas; i++)
        {
            for(int j = 0; j < colunas; j++)
            {
                this->mat[i][j] = 0;
            }
        }
    }

    virtual ~Matriz(){}

    inline Matriz operator * (int valor)
    {
        Matriz aux(this->num_linhas, this->num_colunas);
        for(int i=0; i<this->num_colunas; i++)
        {
            for(int j=0; j<this->num_linhas; j++)
            {
                aux.mat[j][i] = this->mat[i][j] * valor;
            }
        }
        return aux;
    }


    inline Matriz operator +(Matriz m)
    {
        Matriz aux(m.num_linhas, m.num_colunas);

        if(m.num_colunas == this->num_colunas && m.num_linhas == this->num_linhas)
        {
            for (int i = 0; i < m.num_colunas; i++)
            {
                for (int j = 0; j < m.num_linhas; j++)
                {
                    aux.mat[j][i] = this->mat[i][j] + m.mat[i][j];
                }
            }
        }
        return aux;
    }

    inline Matriz operator *(Matriz m)
    {
        Matriz aux(m.num_linhas, m.num_colunas);

        if(m.num_colunas == this->num_colunas && m.num_linhas == this->num_linhas)
        {
            for (int i = 0; i < m.num_colunas; i++)
            {
                for (int j = 0; j < m.num_linhas; j++)
                {
                    aux.mat[j][i] = this->mat[i][j] * m.mat[j][i];
                }
            }
        }
        return aux;
    }

    inline Matriz operator -(Matriz m)
    {
        Matriz aux(m.num_linhas, m.num_colunas);
        if(m.num_colunas == this->num_colunas && m.num_linhas == this->num_linhas)
        {
            for (int i = 0; i < m.num_colunas; i++)
            {
                for (int j = 0; j < m.num_linhas; j++)
                {
                    aux.mat[j][i] = this->mat[i][j] - m.mat[i][j];
                }
            }
        }
        return aux;
    }

    const void imprime()
    {
        for(int i=0; i<this->num_linhas; i++)
        {
            cout<<"|";
            for(int j=0; j<this->num_colunas; j++)
            {
                cout<<this->mat[i][j]<<"|";
            }
            cout<<endl;
        }
    }
    friend Matriz operator *(int, Matriz);
    friend ostream& operator << (ostream &os, Matriz &m);
    friend istream& operator >> (istream &is, Matriz &m);

private:

    int num_linhas;
    int num_colunas;
    int **mat;

};

inline Matriz operator *(int valor, Matriz m)
{
    Matriz aux(m.num_linhas, m.num_colunas);
    for(int i=0; i<m.num_colunas; i++)
    {
        for(int j=0; j<m.num_linhas; j++)
        {
            aux.mat[i][j] = m.mat[i][j] * valor;
        }
    }
    return aux;
}

inline ostream& operator << (ostream &os, Matriz &m)
{
    for(int i=0; i<m.num_linhas; i++)
    {

        os<<"|";
        for(int j=0; j<m.num_colunas; j++)
        {
            os<<m.mat[i][j]<<"|";
        }
        os<<endl;
    }
    os<<endl;
    return os;
}

inline istream& operator >> (istream &is, Matriz &m)
{
    for(int i=0; i<m.num_linhas; i++)
    {
        for(int j=0; j<m.num_colunas; j++)
        {
            is>>m.mat[i][j];
        }
    }
    return is;
}

#endif //TRABALHO1_MATRIZ_H
