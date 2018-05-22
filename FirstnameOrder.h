#pragma once
#include "SortOrder.h"
class FirstNameOrdered :
	public SortOrder
{
public:
	
	std::map<std::string, Person> getSortedEntries(const std::map<std::string, Person>&);
};

