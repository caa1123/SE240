/*	@file main.cpp
	This file implements the item class
	Student: Chandler mattila
	star id: qm6388nf
	@date 12/9/2018
*/


using namespace std;
#include <iostream>

Item::Item()
{
	itemID = 0;
	itemName = "";
}

Item::Item(const int& ID, std::string name, double price)
{
	itemID = ID;
	itemName = name;
	itemPrice = price;
}

void Item::setItemID(const int& ID)
{
	itemID = ID;
}

void Item::setItemPrice(const double & price)
{
	itemPrice = price;
}

void Item::setItemName(std::string name)
{
	itemName = name;
}


std::string Item::getItemName()
{
	return itemName;
}

int Item::getItemID()
{
	return itemID;
}

double Item::getItemPrice()
{
	return itemPrice;
}

