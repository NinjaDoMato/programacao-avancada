#include"Pilha.h"
#include "Ponto.h"

using namespace std;

int main() {
    cout << "Trabalho 3 - Pilha" << endl;

    Pilha pilha1(6);

    int i;

    //Empilha utilizando operador +=
    pilha1 += "D";
    pilha1 += "a";
    pilha1 += "n";
    pilha1 += "i";
    pilha1 += "e";
    pilha1 += "l";

    pilha1.Imprime();
    int tam = pilha1.Tamanho();

    //Desempilha utiliando operador --
    for(i = 0; i < tam; i++)
    {
        pilha1--;
    }
    pilha1.Imprime();

    cout<<"Trabalho 3 - Ponto"<<endl;

    //Criação dos objetos Ponto
    Ponto p1(1, 2);
    Ponto p2(3, 4);
    Ponto p3(4, 6);

    cout<<"P1: "<<p1[0]<<", "<<p1[1]<<endl;
    cout<<"P2: "<<p2[0]<<", "<<p2[1]<<endl;
    cout<<"P3: "<<p3[0]<<", "<<p3[1]<<endl;

    //Aplicação dos operadores
    Ponto res = (p1*3)+p2-p3/(p1+p2);

    //Resultado
    res.imprime();

    return 0;
}
