using namespace std;
#include <iostream>
#include <string>


class Item
{
private:
	int itemID;
	int itemPrice;
	std::string itemName;

public:
	Item();
	Item(const int& ID, std::string name,double price);
	void setItemID(const int& ID);
	void setItemPrice(const double& price);
	void setItemName(std::string name);
	std::string getItemName();
	int getItemID();
	double getItemPrice();
};
