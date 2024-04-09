#include "Wallet.h"

Wallet::Wallet(double initialBalance) : balance(initialBalance) {}

double Wallet::getBalance() const {
    return balance;
}

void Wallet::addMoney(double amount) {
    balance += amount;
}

bool Wallet::subtractMoney(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

bool Wallet::canAfford(double amount) const {
    return balance >= amount;
}