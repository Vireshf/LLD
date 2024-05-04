//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_NOCOININSERTEDSTATE_H
#define VENDING_MACHINE_NOCOININSERTEDSTATE_H


#include "State.h"
#include "VendingMachine.h"


class NoCoinInsertedState : public State{
private:
    VendingMachine* vendingMachine;
public:
    NoCoinInsertedState(VendingMachine* vendingMachine);
    void insertCoin(double amount);
    void pressButton(int aisleCount);
    void dispenseItem(int aisleNum);
};


#endif //VENDING_MACHINE_NOCOININSERTEDSTATE_H
