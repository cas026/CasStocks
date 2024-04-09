#include "Trader.h"
#include "Wallet.h"

Trader::Trader(Portfolio& portfolio, Wallet& wallet) : portfolio(portfolio), wallet(wallet) {}

void Trader::buyStock(const Stock& stock, int quantity) {
    double cost = stock.getPrice() * quantity;
    if (wallet.canAfford(cost)) {
        wallet.subtractMoney(cost);
        portfolio.addStock(stock, quantity);
    } else {
        std::cout << "Insufficient balance to buy " << quantity << " units of " << stock.getSymbol() << std::endl;
    }
}

void Trader::sellStock(const std::string& symbol, int quantity) {
    if (portfolio.getQuantity(symbol) >= quantity) {
        portfolio.removeStock(symbol);
    }
}