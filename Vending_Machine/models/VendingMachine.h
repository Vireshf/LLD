//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_VENDINGMACHINE_H
#define VENDING_MACHINE_VENDINGMACHINE_H


#include "State.h"
#include "Inventory.h"

class VendingMachine {
private:
    State *pCurState;
    double amount;
    Inventory *pInventory;
    State *pCoinInsertedState;
    State *pNoCoinInsertedState;
    State *pDispenseState;

public:

    VendingMachine(int aisleCount);
    void insertCoin(double amount);
    void pressButton(int aisleNum);
    bool hasSufficientAmount(double expectedAmount);
    void addProduct(Product *pProduct);

    State *getCurState() const;

    void setCurState(State *pCurState);

    double getAmount() const;

    void setAmount(double amount);

    Inventory *getInventory() const;

    void setInventory(Inventory *pInventory);

    State *getCoinInsertedState() const;

    void setCoinInsertedState(State *pCoinInsertedState);

    State *getNoCoinInsertedState() const;

    void setNoCoinInsertedState(State *pNoCoinInsertedState);

    State *getDispenseState() const;

    void setDispenseState(State *pDispenseState);
};


#endif //VENDING_MACHINE_VENDINGMACHINE_H
