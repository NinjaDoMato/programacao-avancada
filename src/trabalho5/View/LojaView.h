#ifndef TRABALHO5_LOJAVIEW_H
#define TRABALHO5_LOJAVIEW_H

#include "C:\Users\dedad\Desktop\Trabalho5/Model\JogoDAO.h"
#include <cstdlib>

class LojaView
{
public:

    int ExibirMenu()
    {
        cout<<"===================================";
        cout << "1 - Cadastrar novo jogo" << endl;
        cout << "2 - Excluir jogo (Id)" << endl;
        cout << "3 - Alterar jogo" << endl;
        cout << "4 - Jogos cadastrados" << endl;
        cout << "5 - Sair" << endl;
        cout<<"===================================\n"<<endl;
        int opcao = 0;
        cout << "Entre com o numero da tarefa desejada: ";
        cin >> opcao;
        return opcao;
    }

    void ExibirJogos(vector<Jogo> jogos)
    {
        string x;

        for (int i = 0 ; i < jogos.size() -1 ; i++)
        {
            cout<<"Jogo "<< i <<": \n"<<endl;
            jogos[i].Imprime();
            cout<<"\n"<<endl;
        }
        cout<<"\nDigite qualquer coisa.\n"<<endl;
        cin>> x;
    }

    void ExibirErro(string message)
    {
        cout<<message<<endl;
    }

    Jogo LerJogo()
    {
        Jogo jogo;
        cout << "Entre com os dados: ID, preço, categoria, plataforma, titulo, quantidade: " << endl;
        cin >> jogo;
        return jogo;
    }

    int LerID()
    {
        int id;
        cout << "Entre com o Id: " << endl;
        cin >> id;
        return id;
    }
};


#endif //TRABALHO5_LOJAVIEW_H
