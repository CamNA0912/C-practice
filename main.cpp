#define _CRT_SECURE_NO_WARNINGS	
#include <iostream>
#include <time.h>

using namespace std;



int main()
{
	int nyear(0);
	int nCyear(2022);

	cout << "Nhap nam sinh: ";
	cin >> nyear;

	time_t Time = time(NULL);

	tm* Now = localtime(&Time);

	nCyear = Now->tm_year + 1900;
	cout << "Age: " << nyear << endl;
	
	cout << nCyear - nyear << " years old" << endl;

	return 0;
}
