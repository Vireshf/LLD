//
// Created by vfattepur on 5/4/2024.
//

#include "CoinInsertedState.h"
#include "../Exceptions/ProductNotAvailableException.h"
#include "../Exceptions/InvalidMoveByUser.h"

CoinInsertedState::CoinInsertedState(VendingMachine *vendingMachine) {
    this->vendingMachine = vendingMachine;
}

void CoinInsertedState::insertCoin(double amount) {
    vendingMachine->setAmount(vendingMachine->getAmount() + amount);
}

void CoinInsertedState::pressButton(int aisleNum) {
    Inventory *pInventory = vendingMachine->getInventory();
    Product *pProduct = pInventory->getProduct(aisleNum);
    if(pProduct == nullptr)
    {
        throw new ProductNotAvailableException("Product not available");
    }
    int price = pProduct->getPrice();
    if(!vendingMachine->hasSufficientAmount(price))
    {
        throw new InvalidMoveByUserException("coin inserted is not sufficient");
    }

    if(!pInventory->checkIfProductAvailable(pProduct))
    {
        throw new InvalidMoveByUserException("Product not available at the moment");
    }
    vendingMachine->setCurState(vendingMachine->getDispenseState());
}

void CoinInsertedState::dispenseItem(int aisleNum) {
    throw new InvalidMoveByUserException("Product can't be dispensed until button is pressed");
}
