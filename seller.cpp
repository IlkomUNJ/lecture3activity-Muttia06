#include "seller.h"
#include <iostream>

Seller::Seller(int id, const std::string& name)
    : sellerId(id), sellerName(name) {}

void Seller::addItem(const Item& item) {
    items.push_back(item);
}

void Seller::updateItem(int targetId, const std::string& newName, double newPrice, int newQuantity) {
    for (auto& item : items) {
        if (item.getId() == targetId) {
            item.updateAll(targetId, newName, newPrice, newQuantity);
            break;
        }
    }
}

void Seller::printSeller() const {
    std::cout << "Seller ID: " << sellerId << ", Nama: " << sellerName << std::endl;
    std::cout << "Daftar Barang:\n";
    for (const auto& item : items) {
        item.printItem();
    }
}