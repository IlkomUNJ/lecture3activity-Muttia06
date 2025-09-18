#include "seller.h"
#include "item.h"
#include <iostream>

int main() {
    Seller seller1(1, "Muttt Mart");

    Item item1(101, "Laptop", 7500000, 5);
    Item item2(102, "Mouse", 150000, 20);

    seller1.addItem(item1);
    seller1.addItem(item2);

    std::cout << "=== Data Awal ===\n";
    seller1.printSeller();

    seller1.updateItem(101, "Laptop Gaming", 8500000, 3);

    std::cout << "\n=== Setelah Update Item ===\n";
    seller1.printSeller();

    return 0;
}