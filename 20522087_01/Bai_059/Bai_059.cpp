#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	cout << "So luong chu so cua n: " << dem;
	return 0;
}