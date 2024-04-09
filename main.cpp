#include "Trader.h"
#include "Portfolio.h"
#include "Stock.h"
#include "Wallet.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main() {
    Portfolio portfolio;
    Wallet wallet(10000.0);  // Initial balance of 10000
    Trader trader(portfolio, wallet);

    // Create a map of allowed stock symbols to their prices
    std::map<std::string, double> allowedStocks = {{"AAPL", 150.0}, {"GOOG", 2800.0}, {"MSFT", 300.0}};

    // Inform the user about the allowed stock symbols and their prices
    std::cout << "Allowed stock symbols and their prices are: \n";
    for (const auto& stock : allowedStocks) {
        std::cout << stock.first << ": $" << stock.second << "\n";
    }

    std::cout << "Your current balance is: $" << wallet.getBalance() << std::endl;

    std::string symbol;
    int quantity;

    std::cout << "Enter stock symbol: ";
    std::cin >> symbol;

    // Check if the entered symbol is allowed
    if (allowedStocks.find(symbol) == allowedStocks.end()) {
        std::cout << "Trading of the entered stock symbol is not allowed.\n";
        return 0;
    }

    // Get the price of the stock from the map
    double price = allowedStocks[symbol];

    Stock stock(symbol, price);

    std::cout << "Enter quantity to buy: ";
    std::cin >> quantity;

    trader.buyStock(stock, quantity);

    int currentQuantity = portfolio.getQuantity(stock.getSymbol());
    std::cout << "Now holding " << currentQuantity << " units of " << stock.getSymbol() << std::endl;
    std::cout << "Your current balance is: $" << wallet.getBalance() << std::endl;

    return 0;
}