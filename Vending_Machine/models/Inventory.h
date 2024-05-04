//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_INVENTORY_H
#define VENDING_MACHINE_INVENTORY_H

#include <unordered_map>
#include <queue>

#include "Product.h"
#include "../Exceptions/SpaceNotAvailableException.h"

class Inventory {
private:
    std::unordered_map<int,Product*> aisleToProductMap;
    std::unordered_map<int,int> productIdToCountMap;
    std::queue<int> availbleAisles;

public:
    Inventory(int aisleCount);
    void addProduct(Product *pProduct);
    void deductProductCount(int aisleNum);
    Product* getProduct(int aisleNum);
    bool checkIfProductAvailable(Product *product);
};


#endif //VENDING_MACHINE_INVENTORY_H
