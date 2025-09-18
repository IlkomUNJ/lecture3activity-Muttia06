#ifndef SELLER_H
#define SELLER_H

#include <string>
#include <vector>
#include "item.h"

class Seller {
private:
    int sellerId;
    std::string sellerName;
    std::vector<Item> items;

public:
    Seller(int id, const std::string& name);

    void addItem(const Item& item);
    void updateItem(int targetId, const std::string& newName, double newPrice, int newQuantity);
    void printSeller() const;
};

#endif // SELLER_H