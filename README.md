# PGM-Project

# PGM - Pro Gamer MANAGER

 ![](https://img.shields.io/badge/C++-17-orange.svg) ![](https://img.shields.io/badge/CMake-3.14.0-blue.svg)


Project to retake the game "Pro Gamer Manager" in CLI

## Project structure
 ```
    .
    ├── bin                      # Binaries will be here.
    ├── lib                      # Libraries will be here.
    ├── src                      # Source folder.
    |   └── CMakeLists.txt       # Project CMake build script.
    └── CMakeLists.txt           # Main CMake build script.
```
### How to Use
 - Utilizing CMake, Execute the following commands
 ``` 
     git clone https://github.com/Novout/PGM-Project.git
     cd PGM-Project
     mkdir build
     cd build
     cmake .. -G" COMPILER " OR cmake .. -G"MinGW Makefiles" -DCMAKE_SH="CMAKE_SH-NOTFOUND"  # Read the CMake docs and select a generator
     make && make install                               # Now run your preferred compiler
```
