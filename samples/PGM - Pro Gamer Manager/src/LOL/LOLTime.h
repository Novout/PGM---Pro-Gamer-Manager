#pragma once

namespace PGM 
{
namespace JOGADOR 
{
namespace LOL
{
class LOLTime : public TimeBase
{
private:
    LeagueOfLegends_Player Player_TOP; 
    LeagueOfLegends_Player Player_JUNGLE;
    LeagueOfLegends_Player Player_MID; 
    LeagueOfLegends_Player Player_ADC;
    LeagueOfLegends_Player Player_SUPPORT; 

    int m_vitorias;
    int m_empates;
    int m_derrotas;

    std::string m_nome;
public:
    LOLTime();
    LOLTime(LeagueOfLegends_Player Player);
    ~LOLTime();

    void get_players();
    void set_destaque();

    const int get_vitorias() const;
    const int get_empates() const;
    const int get_derrotas() const;
    const std::string get_nome() const;

    const LeagueOfLegends_Player get_top() const;
    const LeagueOfLegends_Player get_jungler() const;
    const LeagueOfLegends_Player get_mid() const;
    const LeagueOfLegends_Player get_adc() const;
    const LeagueOfLegends_Player get_support() const;

    void set_top(LeagueOfLegends_Player nTop);
    void set_jungler(LeagueOfLegends_Player nJungler);
    void set_mid(LeagueOfLegends_Player nMid);
    void set_adc(LeagueOfLegends_Player nAdc);
    void set_support(LeagueOfLegends_Player nSupport);
    void set_nome(std::string nNome);

    void set_vitorias(int nVitorias);
    void set_empates(int nEmpates);
    void set_derrotas(int nDerrotas);
};
}
}
}