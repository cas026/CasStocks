#ifndef WALLET_H
#define WALLET_H

class Wallet {
private:
    double balance;

public:
    Wallet(double initialBalance);

    double getBalance() const;

    void addMoney(double amount);

    bool subtractMoney(double amount);

    bool canAfford(double amount) const;
};

#endif