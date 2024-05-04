//
// Created by vfattepur on 5/4/2024.
//

#include "Inventory.h"
#include "../Exceptions/ProductNotAvailableException.h"


Inventory::Inventory(int aisleCount)
{
    for(int i=0;i<aisleCount;i++)
    {
        availbleAisles.push(i+1);
    }
}
void Inventory::addProduct(Product *pProduct)
{
    int id = pProduct->getId();
    int productCount = productIdToCountMap[id];
    if(productCount == 0)
    {
        if(availbleAisles.empty())
        {
            throw new SpaceNotAvailableException("can't add new product since space not available");
        }
        aisleToProductMap[availbleAisles.front()] = pProduct;
        availbleAisles.pop();
    }
    productIdToCountMap[id]++;
}

void Inventory::deductProductCount(int aisleNum) {
    Product *pProduct = aisleToProductMap[aisleNum];
    if(pProduct == nullptr)
    {
        throw new ProductNotAvailableException("can't remove product since product not available");
    }
    productIdToCountMap[pProduct->getId()]--;
    int updateCount = productIdToCountMap[pProduct->getId()];
    if(updateCount == 0)
    {
        productIdToCountMap.erase(pProduct->getId());
        aisleToProductMap.erase(aisleNum);
        availbleAisles.push(aisleNum);
    }
}

Product *Inventory::getProduct(int aisleNum) {
    return aisleToProductMap[aisleNum];
}

bool Inventory::checkIfProductAvailable(Product *pProduct) {
    int count = productIdToCountMap[pProduct->getId()];
    return count > 0;
}

