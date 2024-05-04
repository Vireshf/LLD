//
// Created by vfattepur on 5/4/2024.
//

#ifndef VENDING_MACHINE_SPACENOTAVAILABLEEXCEPTION_H
#define VENDING_MACHINE_SPACENOTAVAILABLEEXCEPTION_H

#include<exception>
#include<string>

class SpaceNotAvailableException : public std::exception{
private:
    std::string msg;
public:
    SpaceNotAvailableException(const std::string &msg)
    {
        this->msg = msg;
    }

    const char* what() noexcept
    {
        return msg.c_str();
    }
};


#endif //VENDING_MACHINE_SPACENOTAVAILABLEEXCEPTION_H
