#ifndef BUYER_H
#define BUYER_H

#include <string>
#include "BankCustomer.h"

class Buyer {
private:
    int id;
    std::string name;
    std::string email;
    BankCustomer account; // asosiasi dengan BankCustomer

public:
    Buyer(int id, const std::string& name, BankCustomer& account);

    // Getters
    std::string getName() const;
    std::string getEmail() const;
    int getId() const;

    // Setters
    void setName(const std::string& name);
    void setEmail(const std::string& email);
    void setId(int id);
};

#endif // BUYER_H