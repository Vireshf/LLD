//
// Created by vfattepur on 5/2/2024.
//

#ifndef VENDING_MACHINE_HANDLEDISPENSECHANGEEXCEPTION_H
#define VENDING_MACHINE_HANDLEDISPENSECHANGEEXCEPTION_H

#include <exception>
#include <string>

class HandleDispenseChangeException : public std::exception {
private:
    std::string message;

public:
    HandleDispenseChangeException(std::string message);

    const char* what() const throw();
};


#endif //VENDING_MACHINE_HANDLEDISPENSECHANGEEXCEPTION_H
