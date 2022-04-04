#include <iostream>

using namespace std;
void foo(int* va)
{
	*va = 12;
}

void printArr(const int* arr, int n)
{
	if (!arr)
		return;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
}

void setToNull(int* &tempPtr)
{
	tempPtr = nullptr;
}

int main()
{
	//Truyen bien vao ham bang pointer
	/*int val = 9;
	cout << val << endl;
	foo(&val);
	cout << val << endl;*/

	//Truyen mang vao ham bang pointer
	/*int arr[5] = { 3, 6, 9, 12, 15 };
	printArr(arr, 5);*/

	/*int value = 10;
	int* ptr = &value;

	cout << *ptr << endl;
	setToNull(ptr);

	if (ptr)
		cout << *ptr << endl;
	else
		cout << "ptr is null\n";*/

	return 0;
}
