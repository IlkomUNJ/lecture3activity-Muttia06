#ifndef BANKCUSTOMER_H
#define BANKCUSTOMER_H

#include <string>
using namespace std;

class BankCustomer {
private:
    int id;
    string name;
    double balance;

public:
    // Konstruktor
    BankCustomer(int id, const string& name, double balance);

    // Getter
    int getId() const;
    string getName() const;
    double getBalance() const;

    // Setter
    void setName(const string& name);
    void setBalance(double balance);

    // Operasi tambahan
    void addBalance(double amount);
    void printDetails() const;
};

#endif