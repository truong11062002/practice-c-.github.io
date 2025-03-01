#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int,int);
void XuatTatCaCon(int[], int, int);
int main()
{
	int l, vt;
	cout << "Nhap l: ";
	cin >> l;
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	cout << "\nMang con la: ";
	XuatTatCaCon(b, k, l);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(3) << a[i] << " ";
	}
}

void XuatCon(int a[], int n,int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(4) << a[vt + i];
}
void XuatTatCaCon(int a[], int n, int l)
{
	for (int vt = 0; vt <= n-l ; vt++)
	{
		cout << endl;
		XuatCon(a, n, vt, l);
	}
}