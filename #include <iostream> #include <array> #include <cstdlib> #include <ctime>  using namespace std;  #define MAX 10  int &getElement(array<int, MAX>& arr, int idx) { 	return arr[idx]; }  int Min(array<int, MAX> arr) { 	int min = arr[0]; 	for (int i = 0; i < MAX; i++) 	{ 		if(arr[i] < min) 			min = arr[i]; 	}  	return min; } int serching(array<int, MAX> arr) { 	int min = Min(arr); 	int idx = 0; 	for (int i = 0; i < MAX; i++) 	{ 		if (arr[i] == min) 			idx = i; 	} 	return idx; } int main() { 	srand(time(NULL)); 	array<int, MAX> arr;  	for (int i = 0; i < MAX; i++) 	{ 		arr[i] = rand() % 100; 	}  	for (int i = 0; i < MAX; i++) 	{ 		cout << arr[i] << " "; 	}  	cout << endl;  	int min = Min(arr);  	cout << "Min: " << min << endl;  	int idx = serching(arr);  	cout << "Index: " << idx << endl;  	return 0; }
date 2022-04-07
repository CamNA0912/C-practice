#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAX 10

int &getElement(array<int, MAX>& arr, int idx)
{
	return arr[idx];
}

int Min(array<int, MAX> arr)
{
	int min = arr[0];
	for (int i = 0; i < MAX; i++)
	{
		if(arr[i] < min)
			min = arr[i];
	}

	return min;
}
int serching(array<int, MAX> arr)
{
	int min = Min(arr);
	int idx = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] == min)
			idx = i;
	}
	return idx;
}
int main()
{
	srand(time(NULL));
	array<int, MAX> arr;

	for (int i = 0; i < MAX; i++)
	{
		arr[i] = rand() % 100;
	}

	for (int i = 0; i < MAX; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	int min = Min(arr);

	cout << "Min: " << min << endl;

	int idx = serching(arr);

	cout << "Index: " << idx << endl;

	return 0;
}
