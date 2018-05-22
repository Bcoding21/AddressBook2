#pragma once
#include "Person.h"
#include <map>

class SortOrder
{

public:

	virtual void sort(std::map<std::string, Person>&) = 0;
};

