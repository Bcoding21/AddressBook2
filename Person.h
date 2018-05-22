#pragma once
#include <string>
class Person
{

private:
	const static std::string NO_VAL;
	std::string fName;
	std::string lName;
	std::string phoneNumber;

public:
	Person();

	Person(const Person&);

	Person(std::string, std::string, std::string);

	std::string getFirstName() const;

	std::string getLastName() const;

	std::string getPhoneNumber() const;

	bool operator< (const Person&) const;
	
};

