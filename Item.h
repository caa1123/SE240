/*	@file main.cpp
	This file contains class definition for item
	Student: Chandler mattila
	star id: qm6388nf
	@date 12/9/2018
*/

class Item
{
private:
	int itemID;
	double itemPrice;
	std::string itemName;

public:
	Item(); // Constructor
	Item(const int& ID, std::string name,double price); // Constructor
	void setItemID(const int& ID); // Sets itemID
	void setItemPrice(const double& price); // Sets itemPrice
	void setItemName(std::string name); // sets itemName
	std::string getItemName(); // returns itemName
	int getItemID(); // returns itemID
	double getItemPrice(); // returns itemPrice
};

#include "Item.cpp"
