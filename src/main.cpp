#include "API/PGM_API.h"

auto main(int argc,const char **argv) -> int 
{
    setlocale(LC_ALL, "Portuguese");

    API::run();

    return EXIT_SUCCESS;
}