#include "FirstnameOrder.h"

std::map<std::string, Person> FirstNameOrdered::getSortedEntries(const std::map<std::string, Person>& entries) {

	std::map<std::string, Person> newMap;

	for (const auto& entry : entries) {
		newMap.emplace(entry.second.getFirstName(), entry.second);
	}

	return newMap;
}