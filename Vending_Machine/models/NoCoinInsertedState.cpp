//
// Created by vfattepur on 5/4/2024.
//

#include "NoCoinInsertedState.h"
#include "../Exceptions/InvalidMoveByUser.h"

NoCoinInsertedState::NoCoinInsertedState(VendingMachine *vendingMachine) {
    this->vendingMachine = vendingMachine;
}

void NoCoinInsertedState::insertCoin(double amount) {
    vendingMachine->setAmount(amount);
    vendingMachine->setCurState(vendingMachine->getCoinInsertedState());
}

void NoCoinInsertedState::pressButton(int aisleCount) {
    throw new InvalidMoveByUserException("button can't be pressed until coin is inserted");
}

void NoCoinInsertedState::dispenseItem(int aisleNum) {
    throw new InvalidMoveByUserException("Product can't be disbursed until coin is inserted and button is pressed");
}


