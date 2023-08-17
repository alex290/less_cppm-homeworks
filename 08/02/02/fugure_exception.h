#pragma once

#include <exception>
#include <stdexcept>

class FugureException : public std::domain_error
{
public:
	FugureException(std::string what_arg);

};

