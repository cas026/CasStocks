#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include <map>
#include "Stock.h"

class Portfolio {
public:
    void addStock(const Stock& stock, int quantity);
    void removeStock(const std::string& symbol);
    int getQuantity(const std::string& symbol) const;

private:
    std::map<std::string, std::pair<Stock, int>> stocks;
};

#endif