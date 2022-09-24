#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	int arr[50], length, index, key;

	if (!fetch_array(arr, &length))
		return 0;

	print_array(arr, length);

	///////////Searching for the value given////////////////////
	cout << "Enter the element to be searched: ";
	cin >> key;

	index = search_element(arr, length, key);

	if (index == -1)
		cout << "Element not found";

	else
		cout << key << " is present at index " << index;

	//////////////Modifying the index given////////////////
	cout << endl << endl << "Enter the index to be modified: ";
	cin >> index;

	key = modify_index(arr, index);

	cout << arr[index] << " Value changed to " << key;

	cout << endl << "New Array";
	print_array(arr, length);

	//////////////Adding a new integer given/////////////////
	add_new_integer(arr, &length);

	cout << endl << "New Array";
	print_array(arr, length);

	/////////////Removing the integer given///////////////////
	remove_index(arr, &length);

	cout << endl << "New Array";
	print_array(arr, length);

	return 0;
}