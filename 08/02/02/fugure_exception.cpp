#include "fugure_exception.h"


FugureException::FugureException(std::string what_arg) : std::domain_error(what_arg)
{
	
}