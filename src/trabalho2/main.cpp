#include <iostream>
#include "ContaCorrente.h"
#include "ContaPoupanca.h"


using namespace std;

int main() {
    cout << "========= Trabalho 2 ========="<<endl;

    Cliente cliente1("Daniel");
    Cliente cliente2("Lucas");
    Cliente cliente3("Chaua");

    cout<<"=== Contas originais ==="<<endl;


    ContaCorrente *conta1 = new ContaCorrente(1234, cliente1);
    ContaPoupanca *conta2 = new ContaPoupanca(1235, cliente2);
    ContaCorrente *conta3 = new ContaCorrente(4321, cliente3);
    ContaPoupanca *conta4 = new ContaPoupanca(4320, cliente1);

    cout<<"conta1 - ";
    conta1->Extrato();
    cout<<"conta2 - ";
    conta2->Extrato();
    cout<<"conta3 - ";
    conta3->Extrato();
    cout<<"conta4 - ";
    conta4->Extrato();

    cout<<"== Após os depositos, transferencias e retiradas ==="<<endl;

    conta1->Deposita(7000.0);
    conta2->Retira(100);
    conta3->Deposita(300);
    conta4->Deposita(5000);

    conta1->Transfere(*conta4, 1000.0);

    cout<<"conta1 - ";
    conta1->Extrato();
    cout<<"conta2 - ";
    conta2->Extrato();
    cout<<"conta3 - ";
    conta3->Extrato();
    cout<<"conta4 - ";
    conta4->Extrato();

    cout<<"=== Aplica juros === "<<endl;

    conta1->AplicaJurosDiarios(100);
    conta4->AplicaJurosDiarios(100);

    cout<<"conta1 (corrente) - ";
    conta1->Extrato();
    cout<<"conta4 (poupanca) - ";
    conta4->Extrato();


    // Resposta: Dessa forma o programa ira chamar o construtor da conta 100 vezes, gerando problemas de desempenho
    //ContaCorrente *contascorrente = new ContaCorrente[100];

    //pode ser resolvido criando um vetor de ponteiros
    ContaCorrente **contascorrenteResolvido = new ContaCorrente*[100];


    //Não é possivel instanciar objetos de uma classe abstrata
    //Conta vetorcontas[100];

    //solução, criar um ventor de ponteiros para Conta
    Conta **vetorContas = new Conta *[100];

    //dessa forma é possivel inserir objetos do tipo ContaCorrente e ContaPoupança no vetor, devido ao polimorfismo

    return 0;
}