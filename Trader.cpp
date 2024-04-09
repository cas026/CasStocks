#include "Trader.h"

Trader::Trader(Portfolio& portfolio) : portfolio(portfolio) {}

void Trader::buyStock(const Stock& stock, int quantity) {
    portfolio.addStock(stock, quantity);
}

void Trader::sellStock(const std::string& symbol, int quantity) {
    if (portfolio.getQuantity(symbol) >= quantity) {
        portfolio.removeStock(symbol);
    }
}