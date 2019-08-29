#pragma once

namespace PGM
{
namespace JOGADOR 
{
namespace LOL 
{
class LOLInterface
{
private:
    ENGINE::LOLEngine LOLEngine;
private:
    bool m_GameModeJogadorLOLRun;
    std::string m_GameModeJogadorLOLOption;
public:
    LOLInterface();
    ~LOLInterface();

    void run();
    void text();
    void input_player();
    void input_base(std::string &nNome, int &nIdade, std::string &nPosicao, std::string &nTime);
    void input_caracteristicas(std::string &nPool, std::string &nCrcPositiva, std::string &nCrcNegativa, std::string &nCrcRelativa);
    void game_base();
    void menu_principal();
    void option_handler();

    void opcoes();
    void jogar();
    void time();
    void tabela();
    void email();
    void loja();
    void sair();
};
}    
}    
}