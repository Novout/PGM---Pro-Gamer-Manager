#pragma once

namespace PGM 
{
class InterfaceBase
{
private:
    JOGADOR::InterfaceJogador m_InterfaceJogador;
    MANAGER::InterfaceManager m_InterfaceManager;

    bool m_GameRun;
    int m_GameMode;
    char m_Option;
public:
    
    InterfaceBase(JOGADOR::InterfaceJogador &nJogadorManager, MANAGER::InterfaceManager &nInterfaceManager);
    ~InterfaceBase();

    void run();
    void menu_principal();
    void text();
    void option_handler();
};
}
