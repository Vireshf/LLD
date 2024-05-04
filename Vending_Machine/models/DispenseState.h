//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_DISPENSESTATE_H
#define VENDING_MACHINE_DISPENSESTATE_H


#include "State.h"
#include "VendingMachine.h"

class DispenseState : public State{
private:
    VendingMachine* vendingMachine;
public:
    DispenseState(VendingMachine* vendingMachine);
    void insertCoin(double amount);
    void pressButton(int aisleNum);
    void dispenseItem(int aisleNum);
};


#endif //VENDING_MACHINE_DISPENSESTATE_H
