#include <iostream>
#include "item.h"

const int MAX_CART_SIZE = 10;

class Client
{
private:
	int accoundID;
	double accoundFunds;
	Item cart[MAX_CART_SIZE];

public:
	bool addToCart(const Item& anItem);
	bool removeFromCart(const Item& anItem);
	void changeAccountInfo();
	void placeOrder(const Item& anItem);
	Item* getMenu();



	

	

};