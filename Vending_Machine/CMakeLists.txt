cmake_minimum_required(VERSION 3.27)
project(Vending_Machine)

set(CMAKE_CXX_STANDARD 17)

add_executable(Vending_Machine main.cpp
        models/Product.cpp
        models/Inventory.cpp
        models/Inventory.h
        Exceptions/SpaceNotAvailableException.cpp
        Exceptions/SpaceNotAvailableException.h
        Exceptions/ProductNotAvailableException.cpp
        Exceptions/ProductNotAvailableException.h
        models/State.cpp
        models/State.h
        models/NoCoinInsertedState.cpp
        models/NoCoinInsertedState.h
        models/VendingMachine.cpp
        models/VendingMachine.h
        Exceptions/InvalidMoveByUser.cpp
        Exceptions/InvalidMoveByUser.h
        models/CoinInsertedState.cpp
        models/CoinInsertedState.h
        models/DispenseState.cpp
        models/DispenseState.h
        Exceptions/HandleDispenseChangeException.h
)
