//#include "Client.h"
//#include "Item.h"
using namespace std;
#include <iostream>

Client::Client()
{
	accountID = 1551;
	accountFunds = 0;
	currentSize = 0;
	//rPtr = new Restaurant;

}

bool Client::addToCart(const Item & anItem)
{
	bool ableToAdd = (currentSize + 1) <= MAX_CART_SIZE;
	if (ableToAdd)
	{
		
		cart[currentSize] = anItem;
		currentSize++;
	}


	return ableToAdd;
}

bool Client::removeFromCart(int num)
{
	bool ableToRemove = (currentSize > 0);
	if (ableToRemove)
	{
		
		cart[num] = cart[currentSize-1];
		currentSize--;
	}
	else
		cout <<"Unable to remove from empty cart! " << endl;
	return ableToRemove;
}

void Client::changeAccountInfo()
{
	int ans;
	double amountToAdd;

		cout << "How much money would you like to add to your account?" << endl;
		cin >> amountToAdd;

		accountFunds += amountToAdd;
	
}

void Client::placeOrder()
{
	Item newItem;
	for(int i=0; i < currentSize; i++)
	{
		newItem = cart[i];
		accountFunds -= newItem.getItemPrice();
		r.processOrder(newItem);
	}
	
	r.sendDeliveryInfo();

}

Item* Client::getMenu()
{
	return r.getMenu();
}

int Client::getMenuSize()
{
	return r.getMenuSize();
}


void Client::displayCart()
{
	Item newItem;
	cout <<"Your cart contains: " << endl;
	for(int i=0; i< currentSize;i++)
	{
		newItem = cart[i];
		cout << i + 1 << " " <<newItem.getItemName() << " $" << newItem.getItemPrice() << endl;
	}
}


