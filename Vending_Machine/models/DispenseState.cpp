//
// Created by vfattepur on 5/4/2024.
//

#include "DispenseState.h"
#include "../Exceptions/InvalidMoveByUser.h"

DispenseState::DispenseState(VendingMachine *vendingMachine) {
    this->vendingMachine = vendingMachine;
}

void DispenseState::insertCoin(double amount) {
    throw new InvalidMoveByUserException("coin can't be inserted until dispense happens");
}

void DispenseState::pressButton(int aisleCount) {
    throw new InvalidMoveByUserException("button can't be inserted until  dispense happens");
}

void DispenseState::dispenseItem(int aisleNum) {
    Inventory *pInventory = vendingMachine->getInventory();
    Product *pProduct = pInventory->getProduct(aisleNum);
    pInventory->deductProductCount(aisleNum);
    double change = vendingMachine->getAmount() - pProduct->getPrice();
    std::cout<<"change returned is: "<<change<<std::endl;
    vendingMachine->setAmount(0.0);
    vendingMachine->setCurState(vendingMachine->getNoCoinInsertedState());
}