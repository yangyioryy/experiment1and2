#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "���뻪�����϶ȣ�" ;
	cin >> a;
    b = int(((a - 32) / 1.8)*100+0.5)/100.0;//�������뱣����λ
	cout << "ת��Ϊ�����¶�Ϊ��" << b << endl;
	cout << fixed<<setprecision(2) << b<< endl;//������λ
	return 0;


}