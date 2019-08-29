#include "../API/PGM_API.h"

namespace PGM
{

InterfaceBase::InterfaceBase(JOGADOR::InterfaceJogador &nInterfaceJogador, MANAGER::InterfaceManager &nInterfaceManager)
{
    this->m_InterfaceJogador = nInterfaceJogador;
    this->m_InterfaceManager = nInterfaceManager;
    this->m_GameRun = true;
    this->m_Option = '/';
    this->m_GameMode = 0;
}

InterfaceBase::~InterfaceBase()
{
    std::cout << "\nOBRIGADO POR JOGAR!\n";
    std::cin.get();
}

void InterfaceBase::run()
{
    while (m_GameRun)
    {
        this->menu_principal();
    }
}

void InterfaceBase::menu_principal()
{
    this->text();
    this->option_handler();
    bool GameRunAux = this->m_GameRun;
    API::finish(GameRunAux);
    this->m_GameRun = GameRunAux;
}

void InterfaceBase::text()
{
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|  PRO GAMER MANAGER - By Giovane Cardoso(Novout)  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                    - MENU -                      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |JOGADOR|   |MANAGER|               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|   ESCOLHA:   |   1   |   |   2   |               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
}

void InterfaceBase::option_handler()
{
    std::cin >> this->m_GameMode;
    system("cls");
    if (this->m_GameMode == 1)
        this->m_InterfaceJogador.run();
    else if (this->m_GameMode == 2)
        //m_ManagerManager.run();
        std::cout << "a";
    else
        std::cout << "OPÇÃO INVÁLIDA!! TENTE NOVAMENTE!" << std::endl;
    //this->option_handler();
}
} // namespace PGM