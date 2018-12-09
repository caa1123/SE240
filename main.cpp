/*	@file main.cpp
	This program tests the pizza restaurant program
	Student: Chandler mattila
	star id: qm6388nf
	@date 12/9/2018
*/


#include <iostream>
#include <string>
#include "Client.h"
using namespace std;



int main()
{

	Client newClient;

	
	cout << "Welcome to the SE Pizza restaurant." << endl;
	newClient.changeAccountInfo();

	// Get menu from restaurant here
	int size = newClient.getMenuSize();
	Item* menu = newClient.getMenu();
	Item menuItem;
	cout << endl << "The menu contains: " << endl;
	for(int i=0; i< size; i++)
	{
		menuItem = menu[i];
		cout << endl << i + 1<<" -- " << menuItem.getItemName() << " $" << menuItem.getItemPrice() << endl;
	}
	cout << endl;
	
	
	int order;
	cout << "What item would you like to order? Enter the number from the menu. "  << endl;
	cin >> order;
	
	newClient.addToCart(menu[order-1]);
	
	char response;
	cout << "Would you like to place another order? (Y/N) " << endl;
	cin >> response;
	
	while(response == 'y' || response =='Y')
	{
		cout << "What item would you like to order? Enter the number from the menu. "  << endl;
		cin >> order;
		newClient.addToCart(menu[order-1]);
		
		cout << "Would you like to place another order? (Y/N) " << endl;
		cin >> response;
	}
	
	newClient.displayCart();
	
	cout << "Would you like to remove items from your cart? (Y/N) " << endl;
	cin >> response;
	int num;
	while(response == 'y' || response =='Y')
	{
		cout << "What item would you like to remove? Enter the number from the cart. "  << endl;
		cin >> num;
		newClient.removeFromCart(num-1);
		
		cout << "Would you like to remove another item? (Y/N) " << endl;
		cin >> response;
	}
	
	newClient.displayCart();
	
	
	newClient.placeOrder();


}


