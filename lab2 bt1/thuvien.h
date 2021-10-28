#include<iostream> 
using namespace std; 
const int MAX = 50;

struct DaySo {
	int ds[MAX];
	int n;         
};

void nhapDanhSach(DaySo& x);
void xuatDanhSach(DaySo x);
void ghepDanhSach(DaySo& x,DaySo x1,DaySo x2);
void tachDanhSach(DaySo x,DaySo& le,DaySo& chan);