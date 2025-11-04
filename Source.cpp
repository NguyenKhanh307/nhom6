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
	cout<<"Nhap n: ";
	cin>> n;
	cout<<xuatnsochan(n);
	system("pause");
	return 0;
}
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