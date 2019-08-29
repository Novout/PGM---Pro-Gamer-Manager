#include "../API/PGM_API.h"

namespace PGM
{
namespace JOGADOR
{
namespace LOL
{
LeagueOfLegends_Player::LeagueOfLegends_Player(std::string nNome, int nIdade, std::string nPosicao, std::string nTime, std::string nPool, std::string nCrcPositiva, std::string nCrcNegativa, std::string nCrcRelativa)
{
    this->m_nome = nNome;
    this->m_idade = nIdade;
    this->m_posicao = nPosicao;
    this->m_time = nTime;
    this->m_pool = nPool;
    this->m_caracteristica_positiva = nCrcPositiva;
    this->m_caracteristica_negativa = nCrcNegativa;
    this->m_caracteristica_relativa = nCrcRelativa;

    this->m_nivel = 1.00f;
    this->m_passe = 1000.00f;
    this->m_salario = 100.00f;
    this->m_dinheiro = 50.00f;
    this->m_saude = 100;

    int index = this->get_nivel();

    this->m_ataque = ((index + 8) + (std::rand() % (index + 13)));
    this->m_defesa = ((index + 8) + (std::rand() % (index + 13)));
    this->m_tatica = ((index + 8) + (std::rand() % (index + 13)));
    this->m_criatividade = ((index + 8) + (std::rand() % (index + 13)));
    this->m_comunicatividade = ((index + 8) + (std::rand() % (index + 13)));

    this->set_atributos(this->m_ataque, this->m_defesa, this->m_tatica, this->m_criatividade, this->m_comunicatividade);
}

LeagueOfLegends_Player::LeagueOfLegends_Player()
{
    this->m_nome = get_nome_base();
    this->m_posicao = get_posicao_base();
    this->m_time = get_time_base();
    this->m_pool = get_pool_base();
    this->m_caracteristica_positiva = get_positiva_base();
    this->m_caracteristica_negativa = get_negativa_base();
    this->m_caracteristica_relativa = get_relativa_base();

    this->m_nivel = 1.00f;
    this->m_passe = 1000.00f;
    this->m_salario = 100.00f;
    this->m_dinheiro = 50.00f;
    this->m_saude = 100;

    int index = this->get_nivel();
    int index_idade = this->get_idade_base();

    this->m_idade = ((index_idade - 5) + (std::rand() % (index_idade + 5)));
    this->m_ataque = ((index + 8) + (std::rand() % (index + 13)));
    this->m_defesa = ((index + 8) + (std::rand() % (index + 13)));
    this->m_tatica = ((index + 8) + (std::rand() % (index + 13)));
    this->m_criatividade = ((index + 8) + (std::rand() % (index + 13)));
    this->m_comunicatividade = ((index + 8) + (std::rand() % (index + 13)));

    this->set_atributos(this->m_ataque, this->m_defesa, this->m_tatica, this->m_criatividade, this->m_comunicatividade);
}

LeagueOfLegends_Player::~LeagueOfLegends_Player() {}

const std::string &LeagueOfLegends_Player::get_nome() const
{
    return this->m_nome;
}

void LeagueOfLegends_Player::set_nome(std::string nNome)
{
    this->m_nome = nNome;
}

const int &LeagueOfLegends_Player::get_idade() const
{
    return this->m_idade;
}

void LeagueOfLegends_Player::set_idade(int nIdade)
{
    this->m_idade = nIdade;
}

const std::string &LeagueOfLegends_Player::get_posicao() const
{
    return this->m_posicao;
}

void LeagueOfLegends_Player::set_posicao(std::string nPosicao)
{
    this->m_posicao = nPosicao;
}

const std::string &LeagueOfLegends_Player::get_time() const
{
    return this->m_time;
}

void LeagueOfLegends_Player::set_time(std::string nTime)
{
    this->m_time = nTime;
}

const std::string &LeagueOfLegends_Player::get_pool() const
{
    return this->m_pool;
}

void LeagueOfLegends_Player::set_pool(std::string nPool)
{
    this->m_pool = nPool;
}

const std::string &LeagueOfLegends_Player::get_positiva() const
{
    return this->m_caracteristica_positiva;
}

void LeagueOfLegends_Player::set_positiva(std::string nCaracteristica_positiva)
{
    this->m_caracteristica_positiva = nCaracteristica_positiva;
}

const std::string &LeagueOfLegends_Player::get_negativa() const
{
    return this->m_caracteristica_negativa;
}

void LeagueOfLegends_Player::set_negativa(std::string nCaracteristica_negativa)
{
    this->m_caracteristica_negativa = nCaracteristica_negativa;
}

const std::string &LeagueOfLegends_Player::get_relativa() const
{
    return this->m_caracteristica_relativa;
}

void LeagueOfLegends_Player::set_relativa(std::string nCaracteristica_relativa)
{
    this->m_caracteristica_relativa = nCaracteristica_relativa;
}

const float &LeagueOfLegends_Player::get_nivel() const
{
    return this->m_nivel;
}

void LeagueOfLegends_Player::set_nivel(float nNivel)
{
    this->m_nivel = nNivel;
}

const float &LeagueOfLegends_Player::get_passe() const
{
    return this->m_passe;
}

void LeagueOfLegends_Player::set_passe(float nPasse)
{
    this->m_passe = nPasse;
}

const int &LeagueOfLegends_Player::get_ataque() const
{
    return this->m_ataque;
}

void LeagueOfLegends_Player::set_ataque(int nAtaque)
{
    this->m_ataque = nAtaque;
}

const int &LeagueOfLegends_Player::get_defesa() const
{
    return this->m_defesa;
}

void LeagueOfLegends_Player::set_defesa(int nDefesa)
{
    this->m_defesa = nDefesa;
}

const int &LeagueOfLegends_Player::get_tatica() const
{
    return this->m_tatica;
}

void LeagueOfLegends_Player::set_tatica(int nTatica)
{
    this->m_tatica = nTatica;
}

const int &LeagueOfLegends_Player::get_criatividade() const
{
    return this->m_criatividade;
}

void LeagueOfLegends_Player::set_criatividade(int nCriatividade)
{
    this->m_criatividade = nCriatividade;
}

const int &LeagueOfLegends_Player::get_comunicatividade() const
{
    return this->m_comunicatividade;
}

void LeagueOfLegends_Player::set_comunicatividade(int nComunicatividade)
{
    this->m_comunicatividade = nComunicatividade;
}

int LeagueOfLegends_Player::get_media()
{
    int index = this->m_ataque + this->m_defesa + this->m_comunicatividade + this->m_tatica + this->m_criatividade;

    return index;
}

const void LeagueOfLegends_Player::get_perfil() const
{
    std::cout << "|Idade " << this->m_idade << std::endl;
    std::cout << "|Nome " << this->m_nome << std::endl;
    std::cout << "|Posicao " << this->m_posicao << std::endl;
    std::cout << "|Time " << this->m_time << std::endl;
    std::cout << "|Pool " << this->m_pool << std::endl;
    std::cout << "|Positiva " << this->m_caracteristica_positiva << std::endl;
    std::cout << "|Negativa " << this->m_caracteristica_negativa << std::endl;
    std::cout << "|Relativa " << this->m_caracteristica_relativa << std::endl;
    std::cout << "|Nivel " << std::fixed << this->m_nivel << std::endl;
    std::cout << "|Passe " << std::fixed << this->m_passe << std::endl;
    std::cout << "|Salario " << std::fixed << this->m_salario << std::endl;
    std::cout << "|Dinheiro Atual " << std::fixed << this->m_dinheiro << std::endl;
    std::cout << "|Saude " << this->m_saude << std::endl;
    std::cout << "|Ataque " << this->m_ataque << std::endl;
    std::cout << "|Defesa " << this->m_defesa << std::endl;
    std::cout << "|Tatica " << this->m_tatica << std::endl;
    std::cout << "|Criatividade " << this->m_criatividade << std::endl;
    std::cout << "|Comunicatividade " << this->m_comunicatividade << std::endl;
}

void LeagueOfLegends_Player::set_atributos(int &nAtaque, int &nDefesa, int &nTatica, int &nCriatividade, int &nComunicatividade)
{
    std::string index_positiva = this->get_positiva();
    if (index_positiva == "Estudioso")
    {
        nTatica += 5;
    }
    else if (index_positiva == "Alegre")
    {
        nCriatividade += 3;
        nComunicatividade += 2;
    }
    else if (index_positiva == "Agil")
    {
        nAtaque += 1;
        nComunicatividade += 4;
    }
    else if (index_positiva == "Disciplina")
    {
        nTatica += 2;
        nComunicatividade += 3;
    }
    else if (index_positiva == "Inteligente")
    {
        nAtaque += 1;
        nDefesa += 1;
        nTatica += 1;
        nCriatividade += 1;
        nComunicatividade += 1;
    }
    else
    {
        //API::ERROR_NOT_FOUND<std::string>(index_positiva);
    }

    std::string index_negativa = this->get_negativa();
    if (index_negativa == "Medroso")
    {
        nTatica -= 5;
    }
    else if (index_negativa == "Lerdo")
    {
        nAtaque -= 2;
        nDefesa -= 2;
        nComunicatividade -= 1;
    }
    else if (index_negativa == "Procrastinador")
    {
        nCriatividade -= 1;
        nTatica -= 4;
    }
    else if (index_negativa == "Desmotivado")
    {
        nDefesa -= 2;
        nComunicatividade -= 3;
    }
    else if (index_negativa == "Estressado")
    {
        nComunicatividade -= 5;
    }
    else
    {
        //API::ERROR_NOT_FOUND<std::string>(index_negativa);
    }

    std::string index_relativa = this->get_relativa();
    if (index_relativa == "Agressivo")
    {
        nAtaque += 5;
        nDefesa -= 5;
    }
    else if (index_relativa == "Defensivo")
    {
        nAtaque -= 5;
        nDefesa += 5;
    }
    else if (index_relativa == "Calculista")
    {
        nCriatividade -= 5;
        nTatica += 5;
    }
    else if (index_relativa == "Empolgado")
    {
        nComunicatividade += 2;
        nCriatividade += 5;
        nTatica -= 5;
    }
    else if (index_relativa == "Orgulhoso")
    {
        nComunicatividade += 5;
        nCriatividade -= 3;
        nTatica -= 2;
    }
    else
    {
        API::ERROR_NT_FOUND(index_negativa);
    }
}

} // namespace LOL
} // namespace JOGADOR
} // namespace PGM