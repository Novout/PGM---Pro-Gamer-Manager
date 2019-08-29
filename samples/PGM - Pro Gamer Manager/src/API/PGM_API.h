#include <iostream>
#include <string>
#include <clocale>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <memory>
#include <iomanip>
#include <algorithm>
#include <limits>

#include "../base/JogadorBase.h"
#include "../LOL/LOLJogador.h"
#include "../base/TimeBase.h"
#include "../LOL/LOLTime.h"
#include "../engine/EngineBase.h"
#include "../engine/LOLEngine.h"
#include "../interface/LOLInterface.h"
#include "../interface/interface_jogador.h"
#include "../interface/interface_manager.h"
#include "../interface/interface_base.h"

namespace API
{

auto run() -> void;

auto random_get(std::vector<std::string> Type, int &TypeAux) -> std::string;

auto finish(bool &Run) -> void;

auto ERROR_NT_FOUND(std::string Erro) -> void;

auto setw_numero(int index, int espaco, bool saida) -> int;

auto setw_string(std::string index, int espaco, bool saida) -> int;

auto get_time_random() -> std::string;

} // namespace API