#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    int id;
    std::string name;
    double price;
    int quantity;

public:
    Item(int id, const std::string& name, double price, int quantity);

    void updateAll(int targetId, const std::string& newName, double newPrice, int newQuantity);
    void printItem() const;
    int getId() const;
};

#endif // ITEM_H