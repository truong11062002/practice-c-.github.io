#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	n = abs(n);
	int lc = 9;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	cout << "Chu so nho nhat cua n: " << lc;
	return 0;
}