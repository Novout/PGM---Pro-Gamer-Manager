#include "../API/PGM_API.h"

int timeaux = 0;

namespace PGM
{
namespace JOGADOR
{
JogadorBase::JogadorBase()
{
    this->m_nome_base = {"Alluringlitz", "Bodhisan", "OutNov", "Farrihent", "Lefyond", "Lucky", "Sort",
                         "Pushline", "Asetryo", "Bielzada", "Lorinento", "Trunhdo", "Yanli", "Ntu",
                         "Krajsney", "LiteTorys", "Gweeb", "Horus", "QuitGames", "LMR", "QuitGames",
                         "LMR", "RickSteve", "Faturento", "Lesterno", "Halinrto", "Rest", "Rouanir",
                         "Chinyando", "Tarantyr", "Frederitch", "Vasja"};
    this->m_idade_base = 18;

    this->m_posicao_base = {"Top", "Jungler", "Mid", "Adc", "Support"};

    this->m_time_base = {"HGT", "Falton", "Lenerife", "Rensga", "Unterro", "Lazarito", "Menisto",
                         "Restitido", "JGT", "Lazaros", "Riyido", "Xexnya", "Reilo", "Jayto", "Fiznando",
                         "Karte", "Gingo", "Posteros", "Janak", "XLS"};

    this->m_pool_base = {"Controlador", "Lutador", "Mago", "Atirador", "Assasino", "Tanque", "Especialista"};

    this->m_caracteristica_positiva_base = {"Estudioso", "Alegre", "Agil", "Disciplina", "Inteligente"};

    this->m_caracteristica_negativa_base = {"Negatividade", "Lerdo", "Procrastinador", "Desmotivado",
                                            "Estressado"};

    this->m_caracteristica_relativa_base = {"Agressivo", "Defensivo", "Calculista", "Empolgado", "Orgulhoso"};
}

JogadorBase::~JogadorBase() {}

const std::string JogadorBase::get_nome_base() const
{
    std::vector<std::string> VectorAux = this->m_nome_base;
    std::string StringAux = API::random_get(VectorAux, timeaux);

    return StringAux;
}

const int JogadorBase::get_idade_base() const
{
    return this->m_idade_base;
}

const std::string JogadorBase::get_posicao_base() const
{
    std::vector<std::string> VectorAux = this->m_posicao_base;
    std::string StringAux = API::random_get(VectorAux, timeaux);

    return StringAux;
}

const std::string JogadorBase::get_time_base() const
{
    std::vector<std::string> VectorAux = this->m_time_base;
    std::string StringAux = API::random_get(VectorAux, timeaux);

    return StringAux;
}

const std::string JogadorBase::get_pool_base() const
{
    std::vector<std::string> VectorAux = this->m_pool_base;
    std::string StringAux = API::random_get(VectorAux, timeaux);

    return StringAux;
}

const std::string JogadorBase::get_positiva_base() const
{
    std::vector<std::string> VectorAux = this->m_caracteristica_positiva_base;
    std::string StringAux = API::random_get(VectorAux, timeaux);

    return StringAux;
}

const std::string JogadorBase::get_negativa_base() const
{
    std::vector<std::string> VectorAux = this->m_caracteristica_negativa_base;
    std::string StringAux = API::random_get(VectorAux, timeaux);

    return StringAux;
}

const std::string JogadorBase::get_relativa_base() const
{
    std::vector<std::string> VectorAux = this->m_caracteristica_relativa_base;
    std::string StringAux = API::random_get(VectorAux, timeaux);

    return StringAux;
}

const float JogadorBase::get_salario() const
{
    return this->m_salario;
}

const float JogadorBase::get_dinheiro() const
{
    return this->m_dinheiro;
}

const int JogadorBase::get_saude() const
{
    return this->m_saude;
}

void JogadorBase::set_salario(float nSalario)
{
    this->m_salario = nSalario;
}

void JogadorBase::set_dinheiro(float nDinheiro)
{
    this->m_dinheiro = nDinheiro;
}

void JogadorBase::set_saude(int nSaude)
{
    this->m_saude = nSaude;
}
} // namespace JOGADOR
} // namespace PGM