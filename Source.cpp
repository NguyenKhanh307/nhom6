#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int kiemTraSNT(int a);
int main()
{
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT"<<endl;
	int a,b;
	cout<<"Nhap a :";
	cin>>a;
	cout<<" Nhap b ";
	cin>>b;
	cout<<"Hieu ="<<hieu(a,b)<<endl;
	cout<<"Tong ="<<tong(a,b)<<endl;
	if(kiemTraSNT(a)) cout<<"a la so nguyen to"<<endl;
	else "a khong la so nguyen to"<<endl;
	system("pause");
	return 0;
}
int hieu(int a, int b){
	return a-b;
}
int tong(int a, int b){
	return a+b;
};
int kiemTraSNT(int a){
	for(int i=0;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
