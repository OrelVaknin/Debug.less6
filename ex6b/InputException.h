#include <exception>
#include <string>

class InputException : public std::exception
{
private:
	std::string _msg;

public:
	virtual const char* what() const;

	InputException(std::string msg);

	InputException();
};