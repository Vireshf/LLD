//
// Created by vfattepur on 5/4/2024.
//

#include "Product.h"

const std::string &Product::getName() const {
    return name;
}

void Product::setName(const std::string &name) {
    Product::name = name;
}

int Product::getId() const {
    return id;
}

void Product::setId(int id) {
    Product::id = id;
}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(double price) {
    Product::price = price;
}
