#include <iostream>
using namespace std;
int main()
{
	int  sodau, socuoi;
	int tong = 0;
	cout << "nhap  sodau:";
	cin >> sodau;
	cout << "nhap socuoi:";
	cin >> socuoi;
	cout << "ban vong lap\n";
	while (sodau <= socuoi)
	{
		cout << sodau << " ";
		tong = tong + sodau;
		sodau++;
	}
	cout << "\ntong= " << tong;
	cout << "\nnhap dau:";
	cin >> sodau;
	cout << "nhap cuoi:";
	cin >> socuoi;
	cout << "vong lap while\n";
	do {
		cout << sodau << " ";
		sodau++;
	} while (sodau <= socuoi);

	return 0;

}