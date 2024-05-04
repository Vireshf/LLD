//
// Created by vfattepur on 5/2/2024.
//

#include "HandleDispenseChangeException.h"

HandleDispenseChangeException::HandleDispenseChangeException(std::string message) : message(message){};

const char* HandleDispenseChangeException::what() const throw()
{
    return message.c_str();
}