#include "../API/PGM_API.h"

namespace PGM
{
namespace JOGADOR
{
namespace LOL
{
LOLInterface::LOLInterface()
{
    this->m_GameModeJogadorLOLRun = true;
    this->m_GameModeJogadorLOLOption = "";
}

LOLInterface::~LOLInterface() {}

void LOLInterface::run()
{
    this->text();
    this->input_player();
    while (m_GameModeJogadorLOLRun)
    {
        this->menu_principal();
        this->sair();
    }
}

void LOLInterface::menu_principal()
{
    std::cout << "|INTERFACE PRINCIPAL" << std::endl
              << std::endl;
    std::cout << "|PERFIL: " << std::endl;
    this->LOLEngine.get_player_principal().get_perfil();
    this->option_handler();
}

void LOLInterface::option_handler()
{
    std::cout << std::endl;
    std::cout << "|OPCOES: " << std::endl
              << std::endl;
    std::cout << "|JOGAR " << std::endl;
    std::cout << "|TIME " << std::endl;
    std::cout << "|TABELA " << std::endl;
    std::cout << "|EMAIL " << std::endl;
    std::cout << "|LOJA " << std::endl;
    std::cout << "|SAIR " << std::endl
              << std::endl;

    std::cin >> this->m_GameModeJogadorLOLOption;
    std::transform(this->m_GameModeJogadorLOLOption.begin(), this->m_GameModeJogadorLOLOption.end(), this->m_GameModeJogadorLOLOption.begin(), ::tolower);

    if (this->m_GameModeJogadorLOLOption == "jogar")
    {
        this->jogar();
    }
    else if (this->m_GameModeJogadorLOLOption == "time")
    {
        this->time();
    }
    else if (this->m_GameModeJogadorLOLOption == "tabela")
    {
        this->tabela();
    }
    else if (this->m_GameModeJogadorLOLOption == "email")
    {
        this->email();
    }
    else if (this->m_GameModeJogadorLOLOption == "loja")
    {
        this->loja();
    }
    else if (this->m_GameModeJogadorLOLOption == "sair")
    {
        this->sair();
    }
}

void LOLInterface::opcoes()
{
}

void LOLInterface::jogar()
{
    LOLEngine.get_jogo_interface_segunda(0);
}

void LOLInterface::time()
{
    system("cls");
    std::cout << "|TOPLANER" << std::endl;
    std::cout << std::endl;
    LOLEngine.get_time_principal().get_top().get_perfil();
    std::cout << "|JUNGLER" << std::endl;
    std::cout << std::endl;
    LOLEngine.get_time_principal().get_jungler().get_perfil();
    std::cout << "|MIDLANER" << std::endl;
    std::cout << std::endl;
    LOLEngine.get_time_principal().get_mid().get_perfil();
    std::cout << "|ADCARRY" << std::endl;
    std::cout << std::endl;
    LOLEngine.get_time_principal().get_adc().get_perfil();
    std::cout << "|SUPPORT" << std::endl;
    std::cout << std::endl;
    LOLEngine.get_time_principal().get_support().get_perfil();
    std::cout << std::endl;
}

void LOLInterface::tabela()
{
    LOLEngine.get_tabela();
}

void LOLInterface::email()
{
}

void LOLInterface::loja()
{
}

void LOLInterface::sair()
{
    bool GameRunAux = this->m_GameModeJogadorLOLRun;
    API::finish(GameRunAux);
    this->m_GameModeJogadorLOLRun = GameRunAux;
}

void LOLInterface::text()
{
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|             |  LEAGUE OF LEGENDS  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                -  UTILIZACAO  -                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|            -TOME CUIDADO COM OS INPUT            |" << std::endl;
    std::cout << "|        -INPUT'S IGUAIS AO MOSTRADO NA TELA       |" << std::endl;
    std::cout << "|           -TURNOS A CADA TECLA APERTADA          |" << std::endl;
    std::cout << "|                 -NAO TEM SAVE                    |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|      PRESSIONE QUALQUER TECLA PARA CONTINUAR     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cin.get();
}

void LOLInterface::input_base(std::string &nNome, int &nIdade, std::string &nPosicao, std::string &nTime)
{
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|LoL                                               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  PERFIL - USUARIO  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                 - DIGITE : Nome                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    getline(std::cin, nNome);
    system("cls");

    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|LoL                                               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  PERFIL - USUARIO  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                - DIGITE : Idade                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;

    do
    {
        std::cin >> nIdade;
    } while (nIdade < 15);

    system("cls");

    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|LoL                                               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  PERFIL - USUARIO  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|               - DIGITE : Posicao                 |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|    Top     Jungler    Mid     Adc    Support     |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cin.ignore();
    getline(std::cin, nPosicao);
    system("cls");

    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|LoL                                               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  PERFIL - USUARIO  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|               - DIGITE : Time                    |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    getline(std::cin, nTime);
}

void LOLInterface::input_caracteristicas(std::string &nPool, std::string &nCrcPositiva, std::string &nCrcNegativa, std::string &nCrcRelativa)
{
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|LoL                                               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  PERFIL - USUARIO  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|               - DIGITE : Pool                    |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|        Controlador               Lutador         |" << std::endl;
    std::cout << "|     -----------------         -------------      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|      Bom vs Assassino           Bom vs Mago      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|    Ruim vs Especialista       Ruim vs Tanque     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|     -----------------         --------------     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|            Mago                  Atirador        |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|         ----------            --------------     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|       Bom  vs  Atirador        Bom vs Tanque     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|        Ruim vs Lutador         Ruim vs Mago      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|      -----------------       -----------------   |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|          Assassino               Tanque          |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|  Bom vs Atirador             Bom vs Assassino    |" << std::endl;
    std::cout << "|         Especialista                             |" << std::endl;
    std::cout << "|                              Ruim vs Atirador    |" << std::endl;
    std::cout << "|    Ruim vs Tanque                                |" << std::endl;
    std::cout << "|            Controlador                           |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                ----------------                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                  Especialista                    |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                Bom vs Controlador                |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                Ruim vs Assassino                 |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;

    getline(std::cin, nPool);
    system("cls");

    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|LoL                                               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  PERFIL - USUARIO  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|       - DIGITE : Caracteristica Positiva -       |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|         Estudioso                Alegre          |" << std::endl;
    std::cout << "|     -----------------         -------------      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                              Criatividade + 3    |" << std::endl;
    std::cout << "|         Tatica + 5                               |" << std::endl;
    std::cout << "|                            Comunicatividade + 2  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|     -----------------         --------------     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|            Agil                  Disciplina      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|         ----------            --------------     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|         Ataque + 1               Tatica + 2      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|     Comunicatividade + 4    Comunicatividade + 3 |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|      -----------------       -----------------   |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                    Inteligente                   |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|     Ataque + 1      Defesa + 1      Tatica + 1   |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|      Comunicatividade + 1 Criatividade + 1       |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;

    getline(std::cin, nCrcPositiva);
    system("cls");

    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|LoL                                               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  PERFIL - USUARIO  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|       - DIGITE : Caracteristica Negativa -       |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|          Medroso                 Lerdo           |" << std::endl;
    std::cout << "|     -----------------         -------------      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                 Ataque - 2       |" << std::endl;
    std::cout << "|         Tatica - 5              Defesa - 2       |" << std::endl;
    std::cout << "|                            Comunicatividade - 1  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|     -----------------         --------------     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|       Procrastinador           Desmotivado       |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|         ----------            --------------     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|       Criatividade - 1           Defesa - 2      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|          Tatica - 4         Comunicatividade - 3 |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|      -----------------       -----------------   |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                   Estressado                     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              Comunicatividade - 5                |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;

    getline(std::cin, nCrcNegativa);
    system("cls");

    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|LoL                                               |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              |  PERFIL - USUARIO  |              |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|       - DIGITE : Caracteristica Relativa -       |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|         Agressivo              Defensivo         |" << std::endl;
    std::cout << "|     -----------------         -------------      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|         Ataque + 5               Defesa + 5      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|         Defesa - 5               Ataque - 5      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|     -----------------         --------------     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|        Calculista               Empolgado        |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|       ------------            --------------     |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|       Criatividade - 5        Criatividade +  5  |" << std::endl;
    std::cout << "|                             Comunicatividade +  2|" << std::endl;
    std::cout << "|         Tatica + 5               Tatica - 5      |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|      -----------------       -----------------   |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                  Orgulhoso                       |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|              Comunicatividade + 5                |" << std::endl;
    std::cout << "|                Criatividade - 3                  |" << std::endl;
    std::cout << "|                   Tatica - 2                     |" << std::endl;
    std::cout << "|--------------------------------------------------|" << std::endl;

    getline(std::cin, nCrcRelativa);
    system("cls");
}

void LOLInterface::input_player()
{
    std::string i_nome;
    int i_idade;
    std::string i_posicao;
    std::string i_time;

    std::string i_pool;
    std::string i_caracteristica_positiva;
    std::string i_caracteristica_negativa;
    std::string i_caracteristica_relativa;

    std::cin.get();
    system("cls");

    this->input_base(i_nome, i_idade, i_posicao, i_time);
    system("cls");

    this->input_caracteristicas(i_pool, i_caracteristica_positiva, i_caracteristica_negativa, i_caracteristica_relativa);
    system("cls");

    LeagueOfLegends_Player i_Player(i_nome, i_idade, i_posicao, i_time, i_pool, i_caracteristica_positiva, i_caracteristica_negativa, i_caracteristica_relativa);
    LOLEngine.set_player_principal(i_Player);

    LOLTime i_Time(i_Player);

    LOLEngine.set_time_principal(i_Time);
}
} // namespace LOL
} // namespace JOGADOR
} // namespace PGM