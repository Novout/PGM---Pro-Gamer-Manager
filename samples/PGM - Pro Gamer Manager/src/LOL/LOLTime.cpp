#include "../API/PGM_API.h"

namespace PGM
{
namespace JOGADOR
{
namespace LOL
{

LOLTime::LOLTime()
{

    this->m_nome = get_nome_base_time();
    this->Player_TOP.set_posicao("Top");
    this->Player_JUNGLE.set_posicao("Jungler");
    this->Player_MID.set_posicao("Mid");
    this->Player_ADC.set_posicao("Adc");
    this->Player_SUPPORT.set_posicao("Support");

    std::string index_nome_time = this->Player_TOP.get_time();
    this->Player_JUNGLE.set_time(index_nome_time);
    this->Player_MID.set_time(index_nome_time);
    this->Player_ADC.set_time(index_nome_time);
    this->Player_SUPPORT.set_time(index_nome_time);

    this->m_vitorias = 0;
    this->m_empates = 0;
    this->m_derrotas = 0;

    int index = this->Player_TOP.get_media() + this->Player_JUNGLE.get_media() + this->Player_MID.get_media() + this->Player_ADC.get_media() + this->Player_SUPPORT.get_media();
    this->m_forca = index /= 5;
}

LOLTime::LOLTime(LeagueOfLegends_Player Player)
{
    this->m_nome = Player.get_time();
    this->Player_TOP.set_posicao("Top");
    this->Player_JUNGLE.set_posicao("Jungler");
    this->Player_MID.set_posicao("Mid");
    this->Player_ADC.set_posicao("Adc");
    this->Player_SUPPORT.set_posicao("Support");

    this->m_vitorias = 0;
    this->m_empates = 0;
    this->m_derrotas = 0;

    int index_forca = this->Player_TOP.get_media() + this->Player_JUNGLE.get_media() + this->Player_MID.get_media() + this->Player_ADC.get_media() + this->Player_SUPPORT.get_media();
    this->m_forca = index_forca /= 5;

    std::string index = Player.get_posicao();
    if (index == "Top")
    {
        this->Player_TOP = Player;
    }
    else if (index == "Jungler")
    {
        this->Player_JUNGLE = Player;
    }
    else if (index == "Mid")
    {
        this->Player_MID = Player;
    }
    else if (index == "Adc")
    {
        this->Player_ADC = Player;
    }
    else
    {
        this->Player_SUPPORT = Player;
    }

    std::string index_nome_time = Player.get_time();
    this->Player_JUNGLE.set_time(index_nome_time);
    this->Player_MID.set_time(index_nome_time);
    this->Player_ADC.set_time(index_nome_time);
    this->Player_SUPPORT.set_time(index_nome_time);
}

void LOLTime::get_players()
{
    std::cout << std::endl;
    this->Player_TOP.get_perfil();
    std::cout << std::endl;
    this->Player_JUNGLE.get_perfil();
    std::cout << std::endl;
    this->Player_MID.get_perfil();
    std::cout << std::endl;
    this->Player_ADC.get_perfil();
    std::cout << std::endl;
    this->Player_SUPPORT.get_perfil();
    std::cout << std::endl;
}

void LOLTime::set_destaque()
{
    std::string ForcaAux;
    int PlayerAux = this->Player_TOP.get_media();
    if (this->Player_JUNGLE.get_media() > PlayerAux)
    {
        this->m_destaque = this->Player_JUNGLE.get_media();
    }
    else if (this->Player_MID.get_media() > PlayerAux)
    {
        this->m_destaque = this->Player_MID.get_media();
    }
    else if (this->Player_ADC.get_media() > PlayerAux)
    {
        this->m_destaque = this->Player_ADC.get_media();
    }
    else if (this->Player_SUPPORT.get_media() > PlayerAux)
    {
        this->m_destaque = this->Player_SUPPORT.get_media();
    }
    else
    {
        this->m_destaque = PlayerAux;
    }
}

LOLTime::~LOLTime() {}

const int LOLTime::get_vitorias() const
{
    return this->m_vitorias;
}

const int LOLTime::get_empates() const
{
    return this->m_empates;
}

const int LOLTime::get_derrotas() const
{
    return this->m_derrotas;
}

void LOLTime::set_vitorias(int nVitorias)
{
    this->m_vitorias = nVitorias;
}

void LOLTime::set_empates(int nEmpates)
{
    this->m_empates = nEmpates;
}

void LOLTime::set_derrotas(int nDerrotas)
{
    this->m_derrotas = nDerrotas;
}

void LOLTime::set_nome(std::string nNome)
{
    this->m_nome = nNome;
}

void LOLTime::set_top(LeagueOfLegends_Player nTop)
{
    this->Player_TOP = nTop;
}

void LOLTime::set_jungler(LeagueOfLegends_Player nJungler)
{
    this->Player_JUNGLE = nJungler;
}

void LOLTime::set_mid(LeagueOfLegends_Player nMid)
{
    this->Player_MID = nMid;
}

void LOLTime::set_adc(LeagueOfLegends_Player nAdc)
{
    this->Player_ADC = nAdc;
}

void LOLTime::set_support(LeagueOfLegends_Player nSupport)
{
    this->Player_SUPPORT = nSupport;
}

const LeagueOfLegends_Player LOLTime::get_top() const
{
    return this->Player_TOP;
}

const LeagueOfLegends_Player LOLTime::get_jungler() const
{
    return this->Player_JUNGLE;
}

const LeagueOfLegends_Player LOLTime::get_mid() const
{
    return this->Player_MID;
}

const LeagueOfLegends_Player LOLTime::get_adc() const
{
    return this->Player_ADC;
}

const LeagueOfLegends_Player LOLTime::get_support() const
{
    return this->Player_SUPPORT;
}

const std::string LOLTime::get_nome() const
{
    return this->m_nome;
}
} // namespace LOL
} // namespace JOGADOR
} // namespace PGM