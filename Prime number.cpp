#include <iostream>

using namespace std;

#define MAX 100

int KTrSoNgTo(int n)
{
	//Old
	int dem = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
	{
		return 1;
	}

	//New
	//for (int i = 2; i < n; i++)
	//{
	//	if (n % i == 0)
	//	{
	//		return 0;	//False
	//	}
	//}
	//return 1;	//True
}
void sNgTo(int a[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		// dieu kien ktrsongto(a[i] == 1)
		if (KTrSoNgTo(a[i]) == 1)
		{
			cout << a[i] << " ";
		}
	}
}

int main()
{
	int arr[MAX] = {2, 3, 4, 5, 6, 7, 8, 9};
	int n;
	do
	{
		cout << "Nhap so phan tu: ";
		cin >> n;
	} while (n < 0);
	sNgTo(arr, n);

	return 0;
}
