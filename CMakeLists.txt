cmake_minimum_required(VERSION 3.27)
project(CasStocks)

set(CMAKE_CXX_STANDARD 17)
add_executable(CasStocks main.cpp Stock.cpp Portfolio.cpp Trader.cpp
        Wallet.h
        Wallet.cpp)