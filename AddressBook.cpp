#include "AddressBook.h"

AddressBook::AddressBook() {}

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
