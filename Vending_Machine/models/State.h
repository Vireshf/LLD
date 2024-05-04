//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_STATE_H
#define VENDING_MACHINE_STATE_H


class State {
public:
    virtual void insertCoin(double amount) = 0;
    virtual void pressButton(int aisleNum) = 0;
    virtual void dispenseItem(int aisleNum) = 0;
};


#endif //VENDING_MACHINE_STATE_H
