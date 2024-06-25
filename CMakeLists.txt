cmake_minimum_required(VERSION 3.28)
project(Rubics_Cube_Solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubics_Cube_Solver main.cpp
        Model/GenericRubicsCube.cpp
        Model/GenericRubicsCube.h
        Model/RubicsCube3dArray.cpp
        Model/RubicsCube1dArray.cpp
        Model/RubicsCubeBitBoard.cpp
)
