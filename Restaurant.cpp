/*	@file main.cpp
	This file implements the restaurant class
	Student: Chandler mattila
	star id: qm6388nf
	@date 12/9/2018
*/


using namespace std;
#include <iostream>

Restaurant::Restaurant()
{
	currentOrders = 0;
	
	Item item1(1, "Pepperoni Pizza", 10.00);
	Item item2(2, "Anchovie Pizza", 13.00);
	Item item3(3, "Pineapple Pizza", 11.50);
	Item item4(4, "Sausage Pizza", 10.00);
	Item item5(5, "Extra cheesy Pizza", 11.00);

	currentMenuSize = 5;

	menu[0] = item1;
	menu[1] = item2;
	menu[2] = item3;
	menu[3] = item4;
	menu[4] = item5;

}

Item* Restaurant::getMenu()
{
	return menu;
}

int Restaurant::getMenuSize()
{
	return currentMenuSize;
}

void Restaurant::sendDeliveryInfo()
{
	if (currentOrders < 3)
	{
		cout << "Your order will be delivered in 15 minutes." << endl;
	}
	else
		cout << "Your order will be delivered in 25 minutes. " << endl;
}

void Restaurant::processOrder(Item & anItem)
{
	orders[currentOrders] = anItem;
	currentOrders++;
}

