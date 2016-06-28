#include "inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory () {	
}

void Inventory::addItem(std::string name, int val){
	if (this->find(name) != this->end()) {
		(*this)[name] += val;
	}
	else {
		this->insert(std::make_pair(name, val));
	}
}

void Inventory::removeItem(std::string name){
	if (this->find(name) != this->end()) {
		this->erase(name);
	}
}

int Inventory::getNumItems(std::string name){
	if (this->find(name) != this->end()) {
		return (*this)[name];
	}
	else {
		std::cout << "Item does not exist" << std::endl; 
		return 0;
	}
}

void Inventory::printAllItems(){
	if(this->empty())
	{
		std::cout << "Empty" << std::endl;
		return;
	}

	std::map<std::string, int>::iterator it;
	for (it = this->begin(); it != this->end(); ++it) {
		std::cout << it->first << " " << it->second << std::endl;
	}
}