
#include <iostream>

#include"Caminhonete.h"
#include <string.h>

using namespace std;

int main() {
    cout << "Trabalho 1" << endl << endl;

    //Criação dos objetos Veiculo
    Veiculo veiculo1;
    Veiculo veiculo2("AAA-0000", 1000.0, 100, 10000);

    //Criação dos objetos Carro
    Carro carro1;
    Carro carro2("Fox", "Azul", "BIA-6015", 1500.0, 180, 41000.0);

    //Criação dos objetos Caminhao
    Caminhao caminhao1;
    Caminhao caminhao2(20000, 30.0, 3.5, "AAA-0000", 15000.0, 150.0, 200000.0);

    //Criação dos objetos Caminhonete
    Caminhonete caminhonete1;
    Caminhonete caminhonete2("Ranger", "Branca", "ASS-6969", 1000.0, 5.3, 3.1, 2500.0, 220, 110000);

    //Impressão dos atributos de cada objeto criado
    cout<<"\nVeiculo vazio: \n"<<endl;
    veiculo1.Imprime();
    
    cout<<"\nVeiculo com atributos: \n"<<endl;
    veiculo2.Imprime();

    cout<<"\nCarro vazio: \n"<<endl;
    carro1.Imprime();

    cout<<"\nCarro com atributos: \n"<<endl;
    carro2.Imprime();

    cout<<"\nCaminhao vazio: \n"<<endl;
    caminhao1.Imprime();

    cout<<"\nCaminhao com atributos: \n"<<endl;
    caminhao2.Imprime();

    cout<<"\nCaminhonete vazio: \n"<<endl;
    caminhonete1.Imprime();

    cout<<"\nCaminhonete com atributos: \n"<<endl;
    caminhonete2.Imprime();

    return 0;
}
