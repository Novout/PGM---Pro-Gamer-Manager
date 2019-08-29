cmake_minimum_required(VERSION 3.15.0)

project(pgm-project)

add_executable(pgm-project ${SOURCES})
set_property(TARGET pgm-project PROPERTY CXX_STANDARD 17)
target_compile_definitions(pgm-project PRIVATE -DIVY_DEBUG)

target_sources(pgm-project
PUBLIC
        "main.cpp"
        "pgm/API/PGM_API.cpp"
        "pgm/common/jogador/JogadorBase.cpp"
        "pgm/common/jogador/LOLJogador.cpp"
        "pgm/common/time/TimeBase.cpp"
        "pgm/common/time/LOLTime.cpp"
        "pgm/engine/EngineBase.cpp"
        "pgm/engine/LOLEngine.cpp"
        "pgm/interface/interface_jogador/LOLInterface.cpp"
        "pgm/interface/interface_jogador.cpp"
        "pgm/interface/interface_manager.cpp"
        "pgm/interface/interface_base.cpp"
)

target_include_directories(pgm-project
PUBLIC
        "pgm"
        "pgm/API"
        "pgm/common"
        "pgm/common/jogador"
        "pgm/common/time"
        "pgm/engine"
        "pgm/interface"
        "pgm/interface/interface_jogador"
)

install(TARGETS pgm-project RUNTIME DESTINATION bin)
