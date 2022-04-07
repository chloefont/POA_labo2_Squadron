cmake_minimum_required(VERSION 3.19)
project(POA_labo2_Squadrons)

set(CMAKE_CXX_STANDARD 14)

add_executable(POA_labo2_Squadrons main.cpp Squadron.cpp Squadron.h Ships/Ship.cpp Ships/Ship.h Ships/Cargo/Cargo.cpp Ships/Cargo/Cargo.h Ships/HunterTIE.cpp Ships/HunterTIE.h Ships/InterceptorTIE.cpp Ships/InterceptorTIE.h Ships/Cargo/Shuttle.cpp Ships/Cargo/Shuttle.h Ships/Cargo/StarDreadnought.cpp Ships/Cargo/StarDreadnought.h LinkedList/LinkedList.cpp LinkedList/LinkedList.h)