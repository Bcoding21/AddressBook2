#include "Person.h"


const std::string Person::NO_VAL = "empty";

Person::Person():
	fName(NO_VAL),
	lName(NO_VAL),
	phoneNumber(NO_VAL)
{
}

Person::Person(std::string first, std::string second, std::string num) :
	fName(first),
	lName(second),
	phoneNumber(num)
{
}

Person::Person(const Person& p) :
	fName(p.fName),
	lName(p.lName),
	phoneNumber(p.phoneNumber)
{
}

std::string Person::getFirstName() const { return fName; }

std::string Person::getLastName() const { return lName; }

std::string Person::getPhoneNumber() const { return phoneNumber; }


