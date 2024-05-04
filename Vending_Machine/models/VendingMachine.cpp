//
// Created by vfattepur on 5/4/2024.
//

#include "VendingMachine.h"
#include "NoCoinInsertedState.h"
#include "CoinInsertedState.h"
#include "DispenseState.h"

VendingMachine::VendingMachine(int aisleCount) {
    pInventory = new Inventory(aisleCount);
    pNoCoinInsertedState = new NoCoinInsertedState(this);
    pCurState = pNoCoinInsertedState;
    pCoinInsertedState = new CoinInsertedState(this);
    pDispenseState = new DispenseState(this);
    amount = 0.0;
}

State *VendingMachine::getCurState() const {
    return pCurState;
}

void VendingMachine::setCurState(State *pCurState) {
    VendingMachine::pCurState = pCurState;
}

double VendingMachine::getAmount() const {
    return amount;
}

void VendingMachine::setAmount(double amount) {
    VendingMachine::amount = amount;
}

Inventory *VendingMachine::getInventory() const {
    return pInventory;
}

void VendingMachine::setInventory(Inventory *pInventory) {
    VendingMachine::pInventory = pInventory;
}

State *VendingMachine::getCoinInsertedState() const {
    return pCoinInsertedState;
}

void VendingMachine::setCoinInsertedState(State *pCoinInsertedState) {
    VendingMachine::pCoinInsertedState = pCoinInsertedState;
}

State *VendingMachine::getNoCoinInsertedState() const {
    return pNoCoinInsertedState;
}

void VendingMachine::setNoCoinInsertedState(State *pNoCoinInsertedState) {
    VendingMachine::pNoCoinInsertedState = pNoCoinInsertedState;
}

State *VendingMachine::getDispenseState() const {
    return pDispenseState;
}

void VendingMachine::setDispenseState(State *pDispenseState) {
    VendingMachine::pDispenseState = pDispenseState;
}

void VendingMachine::insertCoin(double amount) {
    pCurState->insertCoin(amount);
}

void VendingMachine::pressButton(int aisleNum) {
    pCurState->pressButton(aisleNum);
    pCurState->dispenseItem(aisleNum);
}

bool VendingMachine::hasSufficientAmount(double expectedAmount) {
    return expectedAmount <= amount;
}

void VendingMachine::addProduct(Product *pProduct) {
    pInventory->addProduct(pProduct);
}
