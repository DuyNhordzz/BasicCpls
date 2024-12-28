#include <iostream>
using namespace std;
int main()
{
	int n, S = 0;

	cout << "Nhap so luong phan tu cua day so: ";
	cin >> n;
	int* arr = new int[n];

	cout << "Nhap cac phan tu cua day so(cach nhau boi dau cach): ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		S += arr[i];
	}

	cout << "Tong cua day so la: " << S << endl;
	delete[] arr;
	return 0;
}
