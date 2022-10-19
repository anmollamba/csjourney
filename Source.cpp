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

	/// Catches the index value bigger than the length, displays the error message, and sets the index to be default at 0.////

	try
	{
		if (index > length)
		{
			throw runtime_error("Index is not in the array!!");
		}
	}
	catch (runtime_error ex)
	{
		cout << "Error caught; Index chosen is greater than the array!" << endl;
		index = 0;
	}

	key = modify_index(arr, index);

	cout << arr[index] << " Value changed to " << key;

	cout << endl << "New Array";
	print_array(arr, length);

	//////////////Adding a new integer given/////////////////
	int element = 0;
	try
	{
		if (element < 0)
		{
			throw runtime_error("Element is a negative number");

		}
	}
	catch (runtime_error ex)
	{
		cout << "Error caught; Element is a negative number" << endl;
		element = 0;
	}

	add_new_integer(arr, &length);

	cout << endl << "New Array";
	print_array(arr, length);

	/////////////Removing the integer given///////////////////
	remove_index(arr, &length);

	cout << endl << "New Array";
	print_array(arr, length);

	return 0;
}