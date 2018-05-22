#pragma once
#include <map>
#include "Person.h"

class AddressBook
{

private:
	std::map<std::string, Person> entries;
	
public:

	AddressBook();

	bool add(const Person&);

	bool remove(const Person&);

	bool contains(const Person&) const;

	int getSize() const;
	
};

