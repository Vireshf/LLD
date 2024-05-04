//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_PRODUCTNOTAVAILABLEEXCEPTION_H
#define VENDING_MACHINE_PRODUCTNOTAVAILABLEEXCEPTION_H

#include<exception>
#include<string>

class ProductNotAvailableException : public std::exception {
private:
    std::string msg;
public:
    ProductNotAvailableException(const std::string &msg)
    {
        this->msg = msg;
    }

    const char* what() noexcept
    {
        return msg.c_str();
    }
};


#endif //VENDING_MACHINE_PRODUCTNOTAVAILABLEEXCEPTION_H
