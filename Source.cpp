#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
void xuatnsochan(int n);
int main()
{

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"Nhap a :";
	cin>>a;
	cout<<" Nhap b ";
	cin>>b;
	cout<<"Hieu ="<<hieu(a,b);
	cout<<"Tong ="<<tong(a,b);
	cout<<"Nhap n: ";
	cin>> n;
	cout<<xuatnsochan(n);
	system("pause");
	return 0;
}
int hieu(int a, int b){
	return a-b;
}
int tong(int a, int b){
	return a+b;
};
void xuatnsochan(int n){
	int i=0;
	int rs=0;
	while(rs<n){
		if(i%2==0){
			cout<<i " ";
			rs++;
		}
		i++;
	}
}
