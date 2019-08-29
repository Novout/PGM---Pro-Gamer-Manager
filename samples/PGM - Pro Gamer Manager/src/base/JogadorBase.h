#pragma once 

namespace PGM
{
namespace JOGADOR 
{
class JogadorBase 
{
protected:
    std::vector<std::string> m_nome_base;
    int m_idade_base;
    std::vector<std::string> m_posicao_base;
    std::vector<std::string> m_time_base;

    std::vector<std::string> m_pool_base;
    std::vector<std::string> m_caracteristica_positiva_base;
    std::vector<std::string> m_caracteristica_negativa_base;
    std::vector<std::string> m_caracteristica_relativa_base;

    float m_salario;
    float m_dinheiro;

    int m_saude;
public:
    JogadorBase();
    ~JogadorBase();

    const std::string get_nome_base () const;
    const int get_idade_base () const;
    const std::string get_posicao_base () const;
    const std::string get_time_base () const;
    const std::string get_pool_base () const;
    const std::string get_positiva_base () const;
    const std::string get_negativa_base () const;
    const std::string get_relativa_base () const;

    const float get_salario() const;
    const float get_dinheiro() const;
    const int get_saude() const;

    void set_salario(float nSalario);
    void set_dinheiro(float nDinheiro);
    void set_saude(int nSaude);
};
}
}