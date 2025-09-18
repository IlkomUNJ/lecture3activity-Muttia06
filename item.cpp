#include "item.h"
#include <iostream>

Item::Item(int id, const std::string& name, double price, int quantity)
    : id(id), name(name), price(price), quantity(quantity) {}

void Item::updateAll(int targetId, const std::string& newName, double newPrice, int newQuantity) {
    if (id == targetId) {
        name = newName;
        price = newPrice;
        quantity = newQuantity;
    }
}

void Item::printItem() const {
    std::cout << "Item ID: " << id
              << ", Nama: " << name
              << ", Harga: Rp" << price
              << ", Jumlah: " << quantity << std::endl;
}

int Item::getId() const {
    return id;
}