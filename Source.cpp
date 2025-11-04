#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int main()
{
	int a,b;
	cout<<"Nhap so a: "; cin>>a;
	cout<<"Nhap so b: "; cin>>b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong ="<<tong(a,b);
	system("pause");
	return 0;
}

int tong(int a, int b){
	return a+b;
};