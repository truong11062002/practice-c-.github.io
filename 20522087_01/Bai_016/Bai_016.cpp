#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8 * x;
	cout << "Ket qua: " << x9;
	return 1;
}