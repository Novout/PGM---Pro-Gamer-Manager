#include "../API/PGM_API.h"

namespace PGM
{
namespace ENGINE
{
LOLEngine::LOLEngine()
{
}

LOLEngine::~LOLEngine()
{
}

void LOLEngine::set_player_principal(JOGADOR::LOL::LeagueOfLegends_Player nPlayer)
{
    this->m_player = nPlayer;
}

void LOLEngine::set_time_principal(JOGADOR::LOL::LOLTime nTime)
{
    this->m_time = nTime;
    this->set_time_random();
}

void LOLEngine::set_time_random()
{
    JOGADOR::LOL::LOLTime t1s;
    JOGADOR::LOL::LOLTime t2s;
    JOGADOR::LOL::LOLTime t3s;
    JOGADOR::LOL::LOLTime t4s;
    JOGADOR::LOL::LOLTime t5s;
    this->m_times_segunda = {this->m_time, t1s, t2s, t3s, t4s, t5s};
    this->set_time_primeira();
}

void LOLEngine::set_time_primeira()
{
    JOGADOR::LOL::LOLTime t1p;
    JOGADOR::LOL::LOLTime t2p;
    JOGADOR::LOL::LOLTime t3p;
    JOGADOR::LOL::LOLTime t4p;
    JOGADOR::LOL::LOLTime t5p;
    JOGADOR::LOL::LOLTime t6p;
    JOGADOR::LOL::LOLTime t7p;
    JOGADOR::LOL::LOLTime t8p;
    this->m_times_primeira = {t1p, t2p, t3p, t4p, t5p, t6p, t7p, t8p};
}

void LOLEngine::get_tabela()
{
    std::cout << "|"
              << "OPCOES: Primeira / Segunda" << std::endl;
    std::cin >> this->EB_option;
    std::transform(this->EB_option.begin(), this->EB_option.end(), this->EB_option.begin(), ::tolower);

    if (EB_option == "segunda")
    {

        std::cout << std::endl
                  << "|SEGUNDA DIVISAO" << std::endl
                  << std::endl;
        std::cout << "|" << std::setfill('-') << std::setw(60) << "|" << std::endl;
        std::cout << "|" << std::setfill(' ') << std::setw(60) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string("POS", 5, false)) << "POS" << std::setw(15) << "TIME" << std::setw(API::setw_string("NOME", 10, true)) << std::setw(10) << "V" << std::setw(API::setw_string("V", 10, true)) << "E" << std::setw(API::setw_string("E", 10, true)) << "D" << std::setw(API::setw_string("D", 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 1 ", 5, false)) << "1" << std::setw(15) << m_times_segunda.at(0).get_nome() << std::setw(API::setw_string(m_times_segunda.at(0).get_nome(), 10, true)) << std::setw(10) << m_times_segunda.at(0).get_vitorias() << std::setw(API::setw_numero(m_times_segunda.at(0).get_vitorias(), 10, true)) << m_times_segunda.at(0).get_empates() << std::setw(API::setw_numero(m_times_segunda.at(0).get_empates(), 10, true)) << m_times_segunda.at(0).get_derrotas() << std::setw(API::setw_numero(m_times_segunda.at(0).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 2 ", 5, false)) << "2" << std::setw(15) << m_times_segunda.at(1).get_nome() << std::setw(API::setw_string(m_times_segunda.at(1).get_nome(), 10, true)) << std::setw(10) << m_times_segunda.at(1).get_vitorias() << std::setw(API::setw_numero(m_times_segunda.at(1).get_vitorias(), 10, true)) << m_times_segunda.at(1).get_empates() << std::setw(API::setw_numero(m_times_segunda.at(1).get_empates(), 10, true)) << m_times_segunda.at(1).get_derrotas() << std::setw(API::setw_numero(m_times_segunda.at(1).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 3 ", 5, false)) << "3" << std::setw(15) << m_times_segunda.at(2).get_nome() << std::setw(API::setw_string(m_times_segunda.at(2).get_nome(), 10, true)) << std::setw(10) << m_times_segunda.at(2).get_vitorias() << std::setw(API::setw_numero(m_times_segunda.at(2).get_vitorias(), 10, true)) << m_times_segunda.at(2).get_empates() << std::setw(API::setw_numero(m_times_segunda.at(2).get_empates(), 10, true)) << m_times_segunda.at(2).get_derrotas() << std::setw(API::setw_numero(m_times_segunda.at(2).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 4 ", 5, false)) << "4" << std::setw(15) << m_times_segunda.at(3).get_nome() << std::setw(API::setw_string(m_times_segunda.at(3).get_nome(), 10, true)) << std::setw(10) << m_times_segunda.at(3).get_vitorias() << std::setw(API::setw_numero(m_times_segunda.at(3).get_vitorias(), 10, true)) << m_times_segunda.at(3).get_empates() << std::setw(API::setw_numero(m_times_segunda.at(3).get_empates(), 10, true)) << m_times_segunda.at(3).get_derrotas() << std::setw(API::setw_numero(m_times_segunda.at(3).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 5 ", 5, false)) << "5" << std::setw(15) << m_times_segunda.at(4).get_nome() << std::setw(API::setw_string(m_times_segunda.at(4).get_nome(), 10, true)) << std::setw(10) << m_times_segunda.at(4).get_vitorias() << std::setw(API::setw_numero(m_times_segunda.at(4).get_vitorias(), 10, true)) << m_times_segunda.at(4).get_empates() << std::setw(API::setw_numero(m_times_segunda.at(4).get_empates(), 10, true)) << m_times_segunda.at(4).get_derrotas() << std::setw(API::setw_numero(m_times_segunda.at(4).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 6 ", 5, false)) << "6" << std::setw(15) << m_times_segunda.at(5).get_nome() << std::setw(API::setw_string(m_times_segunda.at(5).get_nome(), 10, true)) << std::setw(10) << m_times_segunda.at(5).get_vitorias() << std::setw(API::setw_numero(m_times_segunda.at(5).get_vitorias(), 10, true)) << m_times_segunda.at(5).get_empates() << std::setw(API::setw_numero(m_times_segunda.at(5).get_empates(), 10, true)) << m_times_segunda.at(5).get_derrotas() << std::setw(API::setw_numero(m_times_segunda.at(5).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(60) << "|" << std::endl;
        std::cout << "|" << std::setfill('-') << std::setw(60) << "|" << std::endl
                  << std::endl;
    }
    else if (EB_option == "primeira")
    {

        std::cout << std::endl
                  << "|PRIMEIRA DIVISAO" << std::endl
                  << std::endl;
        std::cout << "|" << std::setfill('-') << std::setw(60) << "|" << std::endl;
        std::cout << "|" << std::setfill(' ') << std::setw(60) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string("POS", 5, false)) << "POS" << std::setw(15) << "TIME" << std::setw(API::setw_string("NOME", 10, true)) << std::setw(10) << "V" << std::setw(API::setw_string("V", 10, true)) << "E" << std::setw(API::setw_string("E", 10, true)) << "D" << std::setw(API::setw_string("D", 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 1 ", 5, false)) << "1" << std::setw(15) << m_times_primeira.at(0).get_nome() << std::setw(API::setw_string(m_times_primeira.at(0).get_nome(), 10, true)) << std::setw(10) << m_times_primeira.at(0).get_vitorias() << std::setw(API::setw_numero(m_times_primeira.at(0).get_vitorias(), 10, true)) << m_times_primeira.at(0).get_empates() << std::setw(API::setw_numero(m_times_primeira.at(0).get_empates(), 10, true)) << m_times_primeira.at(0).get_derrotas() << std::setw(API::setw_numero(m_times_primeira.at(0).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 2 ", 5, false)) << "2" << std::setw(15) << m_times_primeira.at(1).get_nome() << std::setw(API::setw_string(m_times_primeira.at(1).get_nome(), 10, true)) << std::setw(10) << m_times_primeira.at(1).get_vitorias() << std::setw(API::setw_numero(m_times_primeira.at(1).get_vitorias(), 10, true)) << m_times_primeira.at(1).get_empates() << std::setw(API::setw_numero(m_times_primeira.at(1).get_empates(), 10, true)) << m_times_primeira.at(1).get_derrotas() << std::setw(API::setw_numero(m_times_primeira.at(1).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 3 ", 5, false)) << "3" << std::setw(15) << m_times_primeira.at(2).get_nome() << std::setw(API::setw_string(m_times_primeira.at(2).get_nome(), 10, true)) << std::setw(10) << m_times_primeira.at(2).get_vitorias() << std::setw(API::setw_numero(m_times_primeira.at(2).get_vitorias(), 10, true)) << m_times_primeira.at(2).get_empates() << std::setw(API::setw_numero(m_times_primeira.at(2).get_empates(), 10, true)) << m_times_primeira.at(2).get_derrotas() << std::setw(API::setw_numero(m_times_primeira.at(2).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 4 ", 5, false)) << "4" << std::setw(15) << m_times_primeira.at(3).get_nome() << std::setw(API::setw_string(m_times_primeira.at(3).get_nome(), 10, true)) << std::setw(10) << m_times_primeira.at(3).get_vitorias() << std::setw(API::setw_numero(m_times_primeira.at(3).get_vitorias(), 10, true)) << m_times_primeira.at(3).get_empates() << std::setw(API::setw_numero(m_times_primeira.at(3).get_empates(), 10, true)) << m_times_primeira.at(3).get_derrotas() << std::setw(API::setw_numero(m_times_primeira.at(3).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 5 ", 5, false)) << "5" << std::setw(15) << m_times_primeira.at(4).get_nome() << std::setw(API::setw_string(m_times_primeira.at(4).get_nome(), 10, true)) << std::setw(10) << m_times_primeira.at(4).get_vitorias() << std::setw(API::setw_numero(m_times_primeira.at(4).get_vitorias(), 10, true)) << m_times_primeira.at(4).get_empates() << std::setw(API::setw_numero(m_times_primeira.at(4).get_empates(), 10, true)) << m_times_primeira.at(4).get_derrotas() << std::setw(API::setw_numero(m_times_primeira.at(4).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 6 ", 5, false)) << "6" << std::setw(15) << m_times_primeira.at(5).get_nome() << std::setw(API::setw_string(m_times_primeira.at(5).get_nome(), 10, true)) << std::setw(10) << m_times_primeira.at(5).get_vitorias() << std::setw(API::setw_numero(m_times_primeira.at(5).get_vitorias(), 10, true)) << m_times_primeira.at(5).get_empates() << std::setw(API::setw_numero(m_times_primeira.at(5).get_empates(), 10, true)) << m_times_primeira.at(5).get_derrotas() << std::setw(API::setw_numero(m_times_primeira.at(5).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 7 ", 5, false)) << "7" << std::setw(15) << m_times_primeira.at(6).get_nome() << std::setw(API::setw_string(m_times_primeira.at(6).get_nome(), 10, true)) << std::setw(10) << m_times_primeira.at(6).get_vitorias() << std::setw(API::setw_numero(m_times_primeira.at(6).get_vitorias(), 10, true)) << m_times_primeira.at(6).get_empates() << std::setw(API::setw_numero(m_times_primeira.at(6).get_empates(), 10, true)) << m_times_primeira.at(6).get_derrotas() << std::setw(API::setw_numero(m_times_primeira.at(6).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(API::setw_string(" 8 ", 5, false)) << "8" << std::setw(15) << m_times_primeira.at(7).get_nome() << std::setw(API::setw_string(m_times_primeira.at(7).get_nome(), 10, true)) << std::setw(10) << m_times_primeira.at(7).get_vitorias() << std::setw(API::setw_numero(m_times_primeira.at(7).get_vitorias(), 10, true)) << m_times_primeira.at(7).get_empates() << std::setw(API::setw_numero(m_times_primeira.at(7).get_empates(), 10, true)) << m_times_primeira.at(7).get_derrotas() << std::setw(API::setw_numero(m_times_primeira.at(7).get_derrotas(), 10, true)) << "|" << std::endl;
        std::cout << "|" << std::setw(60) << "|" << std::endl;
        std::cout << "|" << std::setfill('-') << std::setw(60) << "|" << std::endl
                  << std::endl;
    }
    else
    {
        API::ERROR_NT_FOUND(EB_option);
    }
}

void LOLEngine::get_jogo_interface_segunda(int index)
{
    std::cout << "|" << std::setfill('-') << std::setw(100) << "|" << std::endl;
    std::cout << "|" << std::setfill(' ') << std::setw(100) << "|" << std::endl;
    std::cout << "|" << std::setw(API::setw_string(m_times_segunda.at(index).get_nome(), 40, false)) << m_times_segunda.at(index).get_nome() << std::setw(40) << std::endl;
    std::cout << "|" << std::setw(100) << "|" << std::endl;
    std::cout << "|" << std::setw(API::setw_string("TOP", 10, false)) << "TOP" << std::setw(20) << "JUNGLER" << std::setw(API::setw_string("JUNGLER", 20, true)) << std::setw(20) << "MID" << std::setw(API::setw_string("MID", 20, true)) << "ADC" << std::setw(API::setw_string("ADC", 20, true)) << "SUPPORT" << std::setw(API::setw_string("SUPPORT", 20, true)) << "|" << std::endl;
    std::cout << "|" << std::setw(100) << "|" << std::endl;
    std::cout << "|" << std::setw(API::setw_string(m_times_segunda.at(index).get_top().get_nome(), 10, false)) << m_times_segunda.at(index).get_top().get_nome() << std::setw(20) << m_times_segunda.at(index).get_jungler().get_nome() << std::setw(API::setw_string(m_times_segunda.at(index).get_jungler().get_nome(), 20, true)) << std::setw(20) << m_times_segunda.at(index).get_mid().get_nome() << std::setw(API::setw_string(m_times_segunda.at(index).get_mid().get_nome(), 20, true)) << m_times_segunda.at(index).get_adc().get_nome() << std::setw(API::setw_string(m_times_segunda.at(index).get_adc().get_nome(), 20, true)) << m_times_segunda.at(index).get_support().get_nome() << std::setw(API::setw_string(m_times_segunda.at(index).get_support().get_nome(), 20, true)) << "|" << std::endl;

    std::cout << "|" << std::setw(100) << "|" << std::endl;
    std::cout << "|" << std::setfill('-') << std::setw(100) << "|" << std::endl;
}

const JOGADOR::LOL::LeagueOfLegends_Player LOLEngine::get_player_principal() const
{
    return this->m_player;
}

const JOGADOR::LOL::LOLTime LOLEngine::get_time_principal() const
{
    return this->m_time;
}

const std::vector<JOGADOR::LOL::LOLTime> LOLEngine::get_times_primeira() const
{
    return this->m_times_primeira;
}

const std::vector<JOGADOR::LOL::LOLTime> LOLEngine::get_times_segunda() const
{
    return this->m_times_segunda;
}

} // namespace ENGINE
} // namespace PGM