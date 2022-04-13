cmake_minimum_required(VERSION 3.19)
project(POA_labo2_Squadrons)

set(CMAKE_CXX_STANDARD 14)

add_executable(POA_labo2_Squadrons
        main.cpp
        Squadron.cpp Squadron.hpp
        Ships/Ship.cpp Ships/Ship.hpp
        Ships/Cargo/Cargo.cpp Ships/Cargo/Cargo.hpp
        Ships/HunterTIE.cpp Ships/HunterTIE.hpp
        Ships/InterceptorTIE.cpp Ships/InterceptorTIE.hpp
        Ships/Cargo/Shuttle.cpp Ships/Cargo/Shuttle.hpp
        Ships/Cargo/StarDreadnought.cpp Ships/Cargo/StarDreadnought.hpp
        LinkedList/LinkedList.hpp LinkedList/Iterator.hpp)
add_executable(POA_labo2_Tests
        Tests/mainTests.cpp
        Squadron.cpp Squadron.hpp
        Tests/TestsLinkedList.cpp Tests/TestsLinkedList.hpp
        Tests/TestsShips.cpp Tests/TestsShips.hpp
        Tests/TestsSquadron.cpp Tests/TestsSquadron.h
        Tests/TestsUtils.cpp Tests/TestsUtils.h
        Ships/Ship.cpp Ships/Ship.hpp
        Ships/Cargo/Cargo.cpp Ships/Cargo/Cargo.hpp
        Ships/HunterTIE.cpp Ships/HunterTIE.hpp
        Ships/InterceptorTIE.cpp Ships/InterceptorTIE.hpp
        Ships/Cargo/Shuttle.cpp Ships/Cargo/Shuttle.hpp
        Ships/Cargo/StarDreadnought.cpp Ships/Cargo/StarDreadnought.hpp)