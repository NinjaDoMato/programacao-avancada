#include <string>

using namespace std;

class ClasseCerta
{
public:

    inline string GetAttributo1()
    {
        return this->attributo1;
    }

private:

    string attributo1;
    string attributo2;
};

class ClasseErrada
{
public:

    string atributo1;
    string atributo2;
};


void main()
{
    ClasseCerta classeCerta;

    string teste1 = classeCerta.GetAttributo1(); // Dessa forma apenas o atributo1 será acessivel


    ClasseErrada classeErrada;

    string teste2 = classeErrada.atributo1;   // Dessa forma ambos os atributos ficam diponiveis ao usuário
    string teste3 = classeErrada.atributo2;
}

