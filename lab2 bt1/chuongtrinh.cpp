#include"thuvien.h"

int main()
{
	DaySo x1;
	DaySo x2;
	DaySo x;
	nhapDanhSach(x1);
	nhapDanhSach(x2);
	x.n = x1.n + x2.n;
	ghepDanhSach(x,x1,x2);
	cout << "\nChuoi sau khi ghep.";
	xuatDanhSach(x);
	
	DaySo le;
	DaySo chan;
	tachDanhSach(x, le, chan);
	cout << "\nDanh sach chua phan tu le.";
	xuatDanhSach(le);
	cout << "\nDanh sach chua phan tu chan.";
	xuatDanhSach(chan);
	cout << endl;
	system("pause");
	return 0;
}