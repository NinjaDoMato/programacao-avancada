#ifndef TRABALHO5_LOJACONTROLLER_H
#define TRABALHO5_LOJACONTROLLER_H
#include "C:\Users\dedad\Desktop\Trabalho5\View\LojaView.h"
#include "C:\Users\dedad\Desktop\Trabalho5\Model\JogoDAO.cpp"

class LojaController
{
public:

    LojaView view;
    JogoDAO dao;
    int id;

    void executa()
    {
        int opcao = view.ExibirMenu();

        while(opcao != 5)
        {
            if (opcao == 1)
            {
                Jogo jogo = view.LerJogo();
                dao.insere(jogo);
            }
            else if (opcao == 2)
            {
                id = view.LerID();
                dao.deleta(id);
            }
            else if (opcao == 3)
            {
                id = view.LerID();
                Jogo ols = dao.consulta(id);
                Jogo jogo = view.LerJogo();
                dao.atualiza(jogo);
            }
            else if (opcao == 4)
            {
                vector<Jogo> vetor = dao.consulta();
                view.ExibirJogos(vetor);
            }
            else if (opcao == 5)
            {
                break;
            }

            opcao = view.ExibirMenu();
        }
    }
};


#endif //TRABALHO5_LOJACONTROLLER_H
