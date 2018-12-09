/*	@file main.cpp
	This file implements the restaurant class
	Student: Chandler mattila
	star id: qm6388nf
	@date 12/9/2018
*/

#pragma once
#include <iostream>



const int MAX_MENU_SIZE = 20;
const int MAX_ORDER_SIZE = 10;

class Restaurant
{
private:
	Item menu[MAX_MENU_SIZE];  // Array containing menu items
	Item orders[MAX_ORDER_SIZE]; // Array containing client orders
	int currentOrders; // number of current orders
	int currentMenuSize; // Number of items on menu

public:
	Restaurant(); // Constructor
	Item* getMenu(); // Returns pointer to fist element of menu array for restaurant
	int getMenuSize(); // Returns size of menu
	void sendDeliveryInfo(); // Tells user when to expect delivery
	void processOrder(Item& anItem); // Adds item to order list





};

#include "Restaurant.cpp"
