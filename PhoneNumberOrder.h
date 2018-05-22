#pragma once
#include "SortOrder.h"

class PhoneNumberOrder :
	public SortOrder
{
public:
	std::map<std::string, Person> getSortedEntries(const std::map<std::string, Person>&);
};

