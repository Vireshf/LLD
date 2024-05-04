//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_COININSERTEDSTATE_H
#define VENDING_MACHINE_COININSERTEDSTATE_H


#include "State.h"
#include "VendingMachine.h"

class CoinInsertedState : public State{
private:
    VendingMachine* vendingMachine;
public:
    CoinInsertedState(VendingMachine* vendingMachine);
    void insertCoin(double amount);
    void pressButton(int aisleNum);
    void dispenseItem(int aisleNum);
};


#endif //VENDING_MACHINE_COININSERTEDSTATE_H
