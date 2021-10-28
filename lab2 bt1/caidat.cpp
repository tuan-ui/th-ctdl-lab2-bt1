#include"thuvien.h"

void nhapDanhSach(DaySo& x) 
{
	cout << "\nNhap vao so phan tu cua DS:";
	cin >> x.n;
	for (int i = 0; i < x.n; i++) {
		cout << "Nhap vao phan tu thu " << i + 1 << ":";
		cin >> x.ds[i];
	}
}
void xuatDanhSach(DaySo x) {
	cout << "\nPhan tu trong DS:";
	for (int i = 0; i < x.n; i++)
		cout << x.ds[i] << " ";
}
void ghepDanhSach(DaySo& x, DaySo x1, DaySo x2)
{
	int j=0;
	for (int i = 0; i < x1.n; i++)
	{
		x.ds[j] = x1.ds[i];
		j++;
	}
	for (int i = 0; i < x2.n; i++)
	{
		x.ds[j] = x2.ds[i];
		j++;
	}
}
void tachDanhSach(DaySo x, DaySo& le, DaySo& chan)
{
	int demle = 0;
	int demchan = 0;
	for (int i = 0; i < x.n; i++)
	{
		if (x.ds[i] % 2 == 0)
		{
			chan.ds[demchan] = x.ds[i];
			demchan++;
		}
		else
		{
			le.ds[demle] = x.ds[i];
			demle++;
		}
	}
	chan.n = demchan;
	le.n = demle;
}