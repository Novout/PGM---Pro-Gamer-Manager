#pragma once

namespace PGM
{
namespace JOGADOR 
{
namespace LOL 
{
class LeagueOfLegends_Player : public JogadorBase
{
private:
    JogadorBase m_JogadorBase;
private:
    std::string m_nome;
    int m_idade;
    std::string m_posicao;
    std::string m_time;

    std::string m_pool;
    std::string m_caracteristica_positiva;
    std::string m_caracteristica_negativa;
    std::string m_caracteristica_relativa;

    float m_nivel;
    float m_passe;

    int m_ataque;
    int m_defesa;
    int m_tatica;
    int m_criatividade;
    int m_comunicatividade;
public:
    LeagueOfLegends_Player(std::string nNome, int nIdade, std::string nPosicao, std::string nTime, std::string nPool, std::string nCrcPositiva, std::string nCrcNegativa, std::string nCrcRelativa);//Input inicial pelo jogador
    LeagueOfLegends_Player();//AI
    ~LeagueOfLegends_Player();

    void set_nome (std::string nNome);
    const std::string &get_nome () const;

    void set_idade (int nIdade);
    const int &get_idade () const;

    void set_posicao (std::string nPosicao);
    const std::string &get_posicao () const;
    
    void set_time (std::string nTime);
    const std::string &get_time () const;
    
    void set_pool (std::string nPool);
    const std::string &get_pool () const;

    void set_positiva (std::string nCaracteristica_positiva);
    const std::string &get_positiva () const;

    void set_negativa (std::string nCaracteristica_negativa);
    const std::string &get_negativa () const;

    void set_relativa (std::string nCaracteristica_relativa);
    const std::string &get_relativa () const;
    
    void set_nivel (float nNivel);
    const float &get_nivel () const;

    void set_passe (float nPasse);
    const float &get_passe () const;

    void set_ataque (int nAtaque);
    const int &get_ataque () const;

    void set_defesa (int nDefesa);
    const int &get_defesa () const;

    void set_tatica (int nTatica);
    const int &get_tatica () const;

    void set_criatividade (int nCriatividade);
    const int &get_criatividade () const;

    void set_comunicatividade (int nComunicatividade);
    const int &get_comunicatividade () const;

    const void get_perfil() const;

    int get_media();

    void set_atributos(int &nAtaque, int &nDefesa, int &nTatica, int &nCriatividade, int &nComunicatividade);
};
}    
}    
}