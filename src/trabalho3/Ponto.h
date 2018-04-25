//
// Created by dedad on 11/04/2018.
//

#ifndef PONTO_PONTO_H
#define PONTO_PONTO_H

#include<iostream>

using namespace std;

class Ponto
{
public:

    Ponto(): x(0.0), y(0.0){}

    Ponto(double x, double y): x(x), y(y){}

    virtual ~Ponto(){}

    Ponto operator +(Ponto ponto)
    {
        double x = this->x + ponto.x;
        double y = this->y + ponto.y;

        return Ponto(x, y);
    }

    Ponto operator -(Ponto ponto)
    {
        double x = this->x - ponto.x;
        double y = this->y - ponto.y;

        return Ponto(x, y);
    }

    Ponto operator *(Ponto ponto)
    {
        double x = this->x * ponto.x;
        double y = this->y * ponto.y;

        return Ponto(x, y);
    }
    Ponto operator *(double escalar)
    {
        double x = this->x * escalar;
        double y = this->y * escalar;

        return Ponto(x, y);
    }

    Ponto operator /(Ponto ponto)
    {
        double x = this->x / ponto.x;
        double y = this->y / ponto.y;

        return Ponto(x, y);
    }

    int operator [](int val)
    {
        if(val == 0)
        {
            return this->x;
        }
        else if(val == 1)
        {
            return this->y;
        }
        else
        {
            return -999;
        }
    }

    const inline void imprime()
    {
        cout<<"X: "<<this->x<<endl;
        cout<<"Y: "<<this->y<<endl;
    }


private:

    double x;
    double y;

};

#endif //PONTO_PONTO_H
