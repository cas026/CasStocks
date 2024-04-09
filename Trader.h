#ifndef TRADER_H
#define TRADER_H

#include "Portfolio.h"
#include "Stock.h"
#include "Wallet.h"
#include <iostream>

class Trader {
private:
    Portfolio& portfolio;
    Wallet& wallet;

public:
    Trader(Portfolio& portfolio, Wallet& wallet);

    void buyStock(const Stock& stock, int quantity);
    void sellStock(const std::string& symbol, int quantity);  // Add this line
};

#endif