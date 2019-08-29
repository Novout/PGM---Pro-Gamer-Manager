#pragma once

namespace PGM 
{
namespace JOGADOR 
{
class TimeBase 
{
protected:
    std::vector<std::string> m_nome_base_time;
    int m_forca;    
    std::string m_destaque;
public:
    TimeBase();
    ~TimeBase();

    const std::string get_nome_base_time () const;
    void set_nome_base_time(std::string nNome);

    const int get_forca() const;
    //const std::string get_destaque() const;
};
}
}