#include <iostream>
#include <string>
using namespace std;

template <typename T>
void selectionSort(T arr[], int n) 
{
	for (int i = 0; i < n - 1; i++) 
	{
		int SmallSub = i;
		for (int j = i + 1; j < n; j++) 
		{
			if (arr[j] < arr[SmallSub]) 
			{
				SmallSub = j;
			}
		}
		swap(arr[i], arr[SmallSub]);
	}
}

template <typename T>
void printArray(T arr[], int n) 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() 
{
	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printArray(intArray, 5);
	selectionSort(intArray, 5);
	cout << "Sorted integer array: ";
	printArray(intArray, 5);

	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	cout << "\nOriginal string array: ";
	printArray(stringArray, 4);
	selectionSort(stringArray, 4);
	cout << "Sorted string array: ";
	printArray(stringArray, 4);

	return 0;
}
