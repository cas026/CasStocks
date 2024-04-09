#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock {
public:
    Stock(const std::string& symbol, double price);
    std::string getSymbol() const;
    double getPrice() const;
    void setPrice(double price);

private:
    std::string symbol;
    double price;
};

#endif