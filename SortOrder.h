#pragma once
#include "Person.h"
#include <map>

class SortOrder
{

public:
	virtual std::map<std::string, Person> getSortedEntries(const std::map<std::string, Person>&) = 0;
};

