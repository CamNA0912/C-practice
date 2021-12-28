#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{

	/*int a[100], n;

	cout << "Nhap so: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so nguyen tai vi tri " << i << ": ";
		cin >> a[i];
	}

	for (int j = 0; j < n; j++)
	{
		cout << a[j] << endl;
	}*/

	// Float
	/*float b[100], z;

	cout << "Nhap so: ";
	cin >> z;

	for (int i = 0; i < z; i++)
	{
		cout << "Nhap so thuc tai vi tri " << i << ": ";
		cin >> b[i];
	}

	for (int j = 0; j < z; j++)
	{
		cout << b[j] << "  ";
	}*/


	// Reverse
	int a[100], n;

	cout << "nhap so nguyen: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "nhap so nguyen tai vi tri " << i << ": ";
		cin >> a[i];
	}

	// Vi tri cua mang la n - 1
	for (int j = n - 1; j >= 0; j--)
	{
		cout << a[j] << endl;
	}

	// Flus
	/*float b[100], z;

	cout << "Nhap so : ";
	cin >> z;

	for (int i = 0; i < z; i++)
	{
		cout << "Nhap so thuc tai vi tri " << i << ": ";
		cin >> b[i];
	}

	for (int j = 0; j < z; j++)
	{
		if (b[j] > 0)
			cout << b[j] << "  ";
	}*/


	// SUm
	/*int a[100], n;

	cout << "Nhap so: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so nguyen tai vi tri " << i << ": ";
		cin >> a[i];
	}
	int tong = 0;

	for (int j = 0; j < n; j++)
	{
		tong += a[j];
	}

	cout << "Tong la: " << tong << endl;*/


	// Binh Phuong
	/*float b[100], z;

	cout << "Nhap so: ";
	cin >> z;

	for (int i = 0; i < z; i++)
	{
		cout << "Nhap so thuc tai vi tri " << i << ": ";
		cin >> b[i];
	}

	for (int j = 0; j < z; j++)
	{

		cout << b[j] * b[j] << "  ";
	}*/

	// Even
	/*int a[100], n;

	cout << "Nhap so: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so nguyen tai vi tri " << i << ": ";
		cin >> a[i];
	}

	for (int j = 0; j < n; j++)
	{
		if(a[j] % 2 == 0)
			cout << a[j] << endl;
	}*/

	// Average
	/*float b[100], z;

	cout << "Nhap so: ";
	cin >> z;

	for (int i = 0; i < z; i++)
	{
		cout << "Nhap so thuc tai vi tri " << i << ": ";
		cin >> b[i];
	}

	int tong = 0;
	for (int j = 0; j < z; j++)
	{
		tong += b[j];

	}

	cout << "Trung binh cong la: " << tong / z << endl;*/


	int a[100], n;

	cout << "Nhap so: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so nguyen tai vi tri " << i << ": ";
		cin >> a[i];
	}

	int tong = 0;
	for (int j = 0; j < n; j++)
	{
		if (!(a[j] % 2 == 0))
			tong += a[j];
	}
	cout << "Tong la: " << tong << endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}