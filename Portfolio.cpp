#include "Portfolio.h"

void Portfolio::addStock(const Stock& stock, int quantity) {
    stocks.emplace(stock.getSymbol(), std::make_pair(stock, quantity));
}

void Portfolio::removeStock(const std::string& symbol) {
    stocks.erase(symbol);
}

int Portfolio::getQuantity(const std::string& symbol) const {
    auto it = stocks.find(symbol);
    if (it != stocks.end()) {
        return it->second.second;
    }
    return 0;
}