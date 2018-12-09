/*	@file Client.h
	This file contains the class definition for Client
	Student: Chandler mattila
	star id: qm6388nf
	@date 12/9/2018
*/


#include "Item.h"
#include "Restaurant.h"



const int MAX_CART_SIZE = 10;

class Client
{
private:
	int accountID;
	double accountFunds;
	Item cart[MAX_CART_SIZE]; // Create a cart that customer can add items to
	int currentSize; // Variable to keep track of how many items customer currently has
	Restaurant r; // Create a restaurant object to use functions from class Restaurant



public:
	Client(); // default constructor
	bool addToCart(const Item& anItem); // Add items to cart
	bool removeFromCart(int num); // remove items from cart
	void changeAccountInfo(); // Change the amount of money in customer account
	void placeOrder(); // Place an order
	Item* getMenu(); // Get menu from restaurant
	int getMenuSize(); // return menu size
	void displayCart(); // displays all items in the client's cart



	

	

};


#include "Client.cpp"
