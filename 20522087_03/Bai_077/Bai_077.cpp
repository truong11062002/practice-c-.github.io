#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void TimDoan(float[], int, float&, float&);
int main()
{
	float b[100];
	int k;
	float d, l;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nDoan [x,y]: ";
	TimDoan(b, k, d, l);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(3) << a[i] << " ";
	}
}
float LonNhat(float a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
float NhoNhat(float a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void TimDoan(float a[], int n, float& x, float& y)
{
	x = NhoNhat(a, n);
	y = LonNhat(a, n);
	cout << "[" << x << "," << y << "]";
}