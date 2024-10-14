#include <iostream>
#include <string>
using namespace std;

template <typename T>
int linearSearch(T arr[], int n, T value)
{
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] == value) 
		{
			return i; 
		}
	}
	return -1;
}

template <typename T>
void printSearchResult(int index, T key)
{
	if (index != -1) 
	{
		cout << "Value " << key << " found at index: " << index << endl;
	}
	else 
	{
		cout << "Value " << key << " not found in the array." << endl;
	}
}

int main() 
{

	int intArray[5] = { 64, 25, 12, 22, 11 };
	int intKey = 12;
	int intIndex = linearSearch(intArray, 5, intKey);
	printSearchResult(intIndex, intKey);

	float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
	float floatKey = 1.62;
	int floatIndex = linearSearch(floatArray, 4, floatKey);
	printSearchResult(floatIndex, floatKey);

	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearSearch(stringArray, 4, stringKey);
	printSearchResult(stringIndex, stringKey);

	return 0;
}
