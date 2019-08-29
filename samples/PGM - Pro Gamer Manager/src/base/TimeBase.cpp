#include "../API/PGM_API.h"

int timeaux2 = 0;
namespace PGM
{
namespace JOGADOR
{

TimeBase::TimeBase()
{
    for (int i = 0; i < 100; i++)
        this->m_nome_base_time.push_back(API::get_time_random());
}

TimeBase::~TimeBase()
{
}

const std::string TimeBase::get_nome_base_time() const
{
    std::vector<std::string> VectorAux = this->m_nome_base_time;
    std::string StringAux = API::random_get(VectorAux, timeaux2);

    return StringAux;
}

const int TimeBase::get_forca() const
{
    return this->m_forca;
}
} // namespace JOGADOR
} // namespace PGM