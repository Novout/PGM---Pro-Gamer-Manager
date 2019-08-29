#pragma once

namespace PGM 
{
namespace JOGADOR 
{
class InterfaceJogador
{
private:
    LOL::LOLInterface LOLInterface;

    bool m_GameModeJogadorRun;
    char m_GameModeJogadorOption;

    /**
     *@brief 1 = League of Legends
     *@brief 2 = CSGO
     *@brief 3 = Rainbow Six Siege
     *@brief 4 = Starcraft 2
     *@brief 5 = Overwatch
     *@brief 6 = PUBG
     */
    int m_GameModeJogadorGAMECHOICE;
public:
    InterfaceJogador();
    ~InterfaceJogador();

    void run();
    void InterfaceMain();
    void InterfaceText();
    void OptionStart();

    void set_GMGameChoice (int nGameModeJogadorGAMECHOICE);
    const int &get_GMGameChoice () const;
};
}    
}