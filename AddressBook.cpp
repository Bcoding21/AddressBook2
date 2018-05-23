#include "AddressBook.h"

AddressBook::AddressBook() :
	order(std::make_unique<FirstNameOrdered>())
{
}

bool AddressBook::add(const Person& person) {
	auto it = entries.emplace(person.getLastName(), person);
	return it.second;
}

bool AddressBook::remove(const Person& person) {
	return entries.erase(person.getLastName());
}

bool AddressBook::contains(const Person& person) const {
	auto it = entries.find(person.getLastName());
	return it != entries.end();
}

int AddressBook::getSize() const { return entries.size(); }

void AddressBook::orderBy(std::string criteria) {

	if (criteria == "firstname") {
		order = std::make_unique<FirstNameOrdered>();
		entries = order->getSortedEntries(entries);
		
		
	}

	else if (criteria == "phoneNumber") {
		order = std::make_unique<PhoneNumberOrder>();
		entries = order->getSortedEntries(entries);
	}

}
