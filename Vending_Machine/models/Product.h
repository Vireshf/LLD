//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_PRODUCT_H
#define VENDING_MACHINE_PRODUCT_H

#include <iostream>


class Product {
private:
    std::string name;
    int id;
    double price;

public:

    const std::string &getName() const;

    void setName(const std::string &name);

    int getId() const;

    void setId(int id);

    double getPrice() const;

    void setPrice(double price);

};


#endif //VENDING_MACHINE_PRODUCT_H
