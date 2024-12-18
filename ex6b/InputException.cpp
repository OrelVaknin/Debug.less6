#include "InputException.h"

const char* InputException::what() const
{
	return _msg.c_str();
}

InputException::InputException(std::string msg)
	: _msg(msg)
{
}

InputException::InputException()
	: InputException("This is an input exception")
{
}
