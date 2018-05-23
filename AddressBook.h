#pragma once
#include <map>
#include <memory>
#include "SortOrder.h"
#include "PhoneNumberOrder.h"
#include "FirstnameOrder.h"
#include "Person.h"

typedef std::unique_ptr<SortOrder> Order;

class AddressBook
{

private:
	std::map<std::string, Person> entries;
	Order order;
	
public:

	AddressBook();

	bool add(const Person&);

	bool remove(const Person&);

	bool contains(const Person&) const;

	int getSize() const;

	void orderBy(std::string);
	
};

