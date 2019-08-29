cmake_minimum_required(VERSION 3.15.0)

project("PGM - Pro Gamer Manager"
        VERSION 0.0.1
        DESCRIPTION "hihi"
        HOMEPAGE_URL "https://github.com/Novout/PGM-Project"
        LANGUAGES CXX)
        
set(CMAKE_CXX_STANDARD_REQUIRED 17)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
add_subdirectory(src)