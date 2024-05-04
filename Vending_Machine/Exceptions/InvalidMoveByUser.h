//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_INVALIDMOVEBYUSER_H
#define VENDING_MACHINE_INVALIDMOVEBYUSER_H


#include <string>

class InvalidMoveByUserException : public std::exception{
private:
    std::string msg;
public:
    InvalidMoveByUserException(const std::string &msg)
    {
        this->msg = msg;
    }

    const char* what() noexcept
    {
        return msg.c_str();
    }
};


#endif //VENDING_MACHINE_INVALIDMOVEBYUSER_H
