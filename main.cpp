#include "Trader.h"
#include "Portfolio.h"
#include "Stock.h"
#include <iostream>

int main() {
    Portfolio portfolio;
    Trader trader(portfolio);

    Stock apple("AAPL", 150.0);
    std::cout << "Created stock with symbol " << apple.getSymbol() << " and price " << apple.getPrice() << std::endl;

    std::cout << "Buying 10 units of " << apple.getSymbol() << std::endl;
    trader.buyStock(apple, 10);

    int quantity = portfolio.getQuantity(apple.getSymbol());
    std::cout << "Now holding " << quantity << " units of " << apple.getSymbol() << std::endl;

    return 0;
}