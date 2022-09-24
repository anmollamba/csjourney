#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool fetch_array(int arr[], int* length)
{
	ifstream fp("Numbers.txt");

	if (!fp.is_open())
	{
		cout << "File Not Opened Properly";
		return false;
	}

	*length = 0;

	while (fp >> arr[*length])
	{
		*length = *length + 1;
	}

	fp.close();

	return true;
}

void print_array(int arr[], int length)
{
	cout << endl << "The elements are: ";

	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";

	cout << endl;
}

int search_element(int arr[], int length, int key)
{
	int i;

	for (i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;

	return i;
}

int modify_index(int arr[], int index)
{
	int key;

	cout << "Enter new value to be changed: ";
	cin >> key;

	arr[index] = key;

	return key;
}

void add_new_integer(int arr[], int* length)
{
	int element;

	cout << endl << "Enter new element: ";
	cin >> element;

	arr[*length] = element;

	*length = *length + 1;

	cout << "Element Inserted";
}

void remove_index(int arr[], int* length)
{
	int index;

	cout << endl << "Enter index to be removed: ";
	cin >> index;

	for (int i = index; i < *length - 1; i++)
		arr[i] = arr[i + 1];

	*length = *length - 1;

}