#include "PhoneNumberOrder.h"

std::map<std::string, Person> PhoneNumberOrder::getSortedEntries(const std::map<std::string, Person>& entries) {

	std::map<std::string, Person> numOrdered;

	for (const auto& entry : entries) {
		numOrdered.emplace(entry.second.getPhoneNumber(), entry.second);
	}

	return numOrdered;
}
