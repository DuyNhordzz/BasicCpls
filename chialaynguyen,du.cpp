#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;

	cout << "Nhap a va b: ";
	cin >> a, b;
	c = a / b ; // lay phan nguyen
	d = a % b ; //lay phan du
	cout << "Gia tri c: " << c << " va Gia tri d: " << d;
	return 0;
}
