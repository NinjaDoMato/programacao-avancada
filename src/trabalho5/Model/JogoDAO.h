#ifndef TRABALHO5_JOGODAO_H
#define TRABALHO5_JOGODAO_H

#include <fstream>
#include <vector>

#include "Jogo.h"

class JogoDAO {
public:
    JogoDAO() : arquivo("/tmp/estoque.txt") {  }

    bool insere(Jogo jogo);
    bool insere(vector<Jogo> jogos);

    vector<Jogo> consulta();
    Jogo consulta(int id);

    bool atualiza(Jogo jogo);
    bool deleta(int id);

private:
    string arquivo;
};



#endif //TRABALHO5_JOGODAO_H
