#pragma once

namespace PGM
{
namespace ENGINE
{
class LOLEngine : public EngineBase
{
private:
    std::vector<JOGADOR::LOL::LOLTime> m_times_segunda;
    std::vector<JOGADOR::LOL::LOLTime> m_times_primeira;
    JOGADOR::LOL::LeagueOfLegends_Player m_player;
    JOGADOR::LOL::LOLTime m_time;

protected:
public:
    LOLEngine();
    ~LOLEngine();

    void set_player_principal(JOGADOR::LOL::LeagueOfLegends_Player nPlayer);
    void set_time_principal(JOGADOR::LOL::LOLTime nTime);
    void set_time_random();
    void menu_principal_setting();
    void set_time_primeira();

    void get_tabela();

    void get_jogo_interface_primeira(int index);
    void get_jogo_interface_segunda(int index);

    void reload();

    const JOGADOR::LOL::LeagueOfLegends_Player get_player_principal() const;
    const JOGADOR::LOL::LOLTime get_time_principal() const;
    const std::vector<JOGADOR::LOL::LOLTime> get_times_primeira() const;
    const std::vector<JOGADOR::LOL::LOLTime> get_times_segunda() const;
};
} // namespace ENGINE
} // namespace PGM