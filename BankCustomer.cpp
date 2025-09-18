#include "BankCustomer.h"
#include <iostream>
using namespace std;

int BankCustomer::getId() const {
    return id;
}

string BankCustomer::getName() const {
    return name;
}

double BankCustomer::getBalance() const {
    return balance;
}

void BankCustomer::printDetails() const {
    cout << "ID: " << id << endl;
    cout << "Nama: " << name << endl;
    cout << "Saldo: Rp" << balance << endl;
}

void BankCustomer::setName(const string& newName) {
    name = newName;
}

void BankCustomer::setBalance(double newBalance) {
    balance = newBalance;
}

void BankCustomer::addBalance(double amount) {
    balance += amount;
}
