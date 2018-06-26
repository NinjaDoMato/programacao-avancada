#include "JogoDAO.h"

bool JogoDAO::insere(Jogo jogo)
{
    ofstream outFile(arquivo, ios_base::app);
    outFile << jogo << endl;
    outFile.close();
}

bool JogoDAO::insere(vector<Jogo> jogos)
{
    ofstream outFile(arquivo, ios_base::out);
    for (int i = 0; i < jogos.size(); i++)
    {
        outFile << jogos[i] << endl;
    }
    outFile.close();
}

vector<Jogo> JogoDAO::consulta()
{
    vector<Jogo> jogos;
    ifstream inFile(this->arquivo);

    while (not inFile.eof())
    {
        Jogo jogo;
        inFile >> jogo;
        jogos.push_back(jogo);
    }

    inFile.close();
    return jogos;
}

Jogo JogoDAO::consulta(int id)
{
    vector<Jogo> jogos = consulta();

    for (int i = 0; i < jogos.size(); i++)
    {
        if (jogos[i].GetId() == id)
        {
            return jogos[i];
        }
    }
    return Jogo(-1, "VAZIO");
}

bool JogoDAO::atualiza(Jogo jogo)
{
    vector<Jogo> jogos = consulta();

    for (int i = 0; i < jogos.size(); i++)
    {
        if (jogos[i].GetId() == jogo.GetId())
        {
            jogos[i] = jogo;
            insere(jogos);
            break;
        }
    }
}

bool JogoDAO::deleta(int id)
{

    vector<Jogo> jogos = consulta();

    for (int i = 0; i < jogos.size(); i++)
    {
        if (jogos[i].GetId() == id)
        {
            jogos.erase(jogos.begin() + i);
            break;
        }
    }
    insere(jogos);
}
