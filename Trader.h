#ifndef TRADER_H
#define TRADER_H

#include "Portfolio.h"

class Trader {
public:
    Trader(Portfolio& portfolio);
    void buyStock(const Stock& stock, int quantity);
    void sellStock(const std::string& symbol, int quantity);

private:
    Portfolio& portfolio;
};

#endif