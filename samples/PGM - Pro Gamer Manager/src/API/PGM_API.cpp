#include "PGM_API.h"

namespace API
{

auto run() -> void
{
    PGM::JOGADOR::InterfaceJogador ij;
    PGM::MANAGER::InterfaceManager im;
    PGM::InterfaceBase ib(ij, im);

    ib.run();
}

auto random_get(std::vector<std::string> Type, int &TimeAux) -> std::string
{
    srand(time(0) + TimeAux);
    int index = rand() % Type.size();
    int j = 0;
    TimeAux += 1;
    for (auto it = Type.begin(); it != Type.end(); it++)
    {
        if (index == j)
            return *it;
        j++;
    }

    return "ERROR RETURN JOGADORBASE";
}

auto finish(bool &Run) -> void
{
    char OptionAux;
    std::cout << "Deseja continuar neste menu? (S)Sim ou (N)Não" << std::endl;
    std::cin >> OptionAux;
    Run = (OptionAux == 'S' || OptionAux == 's') ? true : false;
}

auto ERROR_NT_FOUND(std::string Erro) -> void
{
    std::cout << "[PGM - ERROR] : NOT FOUND " << Erro << std::endl;
}

auto setw_numero(int index, int espaco, bool saida) -> int
{
    std::string index_num = std::to_string(index);
    int index_resultado;

    int index_size = index_num.size();

    if (index_size > espaco)
    {
        return 0;
    }

    if (saida == false)
    {
        index_resultado = espaco + index_size;
    }
    else
    {
        index_resultado = espaco - index_size;
    }

    return index_resultado;
}

auto setw_string(std::string index, int espaco, bool saida) -> int
{
    int index_size = index.size();
    int index_resultado;

    if (index_size > espaco)
    {
        return 0;
    }

    if (saida == false)
    {
        index_resultado = espaco + index_size;
    }
    else
    {
        index_resultado = espaco - index_size;
    }

    return index_resultado;
}

auto get_time_random() -> std::string
{
    static unsigned int TimeAuxTimeRandom = 1;

    std::vector<std::string> index = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J",
                                      "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U",
                                      "V", "W", "X", "Y", "Z", "K"};
    std::string index_return = "";

    srand(time(0) + TimeAuxTimeRandom);
    int index_random = 2 + rand() % 3;

    for (int i = 0; i < index_random; i++)
    {
        srand(time(0) + TimeAuxTimeRandom);
        int index_num = std::rand() % index.size();
        TimeAuxTimeRandom += 1;

        index_return += index.at(index_num);
    }

    return index_return;
}
} // namespace API