#include "../API/PGM_API.h"

namespace PGM
{
namespace JOGADOR
{

InterfaceJogador::InterfaceJogador()
{
    this->m_GameModeJogadorOption = '/';
    this->m_GameModeJogadorRun = true;
}

InterfaceJogador::~InterfaceJogador() {}

void InterfaceJogador::run()
{
    while (m_GameModeJogadorRun)
    {
        this->InterfaceMain();
    }
}

void InterfaceJogador::InterfaceMain()
{
    this->InterfaceText();
    this->OptionStart();
    bool GameRunAux = this->m_GameModeJogadorRun;
    API::finish(GameRunAux);
    this->m_GameModeJogadorRun = GameRunAux;
}

void InterfaceJogador::InterfaceText()
{
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|             |  JOGADOR INTERFACE  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|          - ESCOLHA O JOGO (DE 1 A 6) -           |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  LOL  |   | CSGO  |               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |   1   |   |   2   |               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  R6   |   |  SC2  |               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |   3   |   |   4   |               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  OVW  |   | PUBG  |               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |   5   |   |   6   |               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
}

void InterfaceJogador::OptionStart()
{
    int OptAux;
    std::cin >> OptAux;
    system("cls");
    if (OptAux == 1)
    {
        this->LOLInterface.run();
    }
    else
    {
        std::cout << "[PGM_LOG] - '" << OptAux << "' É INVÁLIDO." << std::endl;
    }
}

const int &InterfaceJogador::get_GMGameChoice() const
{
    return this->m_GameModeJogadorGAMECHOICE;
}

void InterfaceJogador::set_GMGameChoice(int nGameModeJogadorGAMECHOICE)
{
    this->m_GameModeJogadorGAMECHOICE = nGameModeJogadorGAMECHOICE;
}
} // namespace JOGADOR

} // namespace PGM