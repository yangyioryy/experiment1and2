#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F,C;
	cout << "���뻪�����϶ȣ�" ;
	cin >> F;
    C = int(((F - 32) / 1.8)*100+0.5)/100.0;//��һ���������뱣����λ
	cout << "ת��Ϊ�����¶�Ϊ��" << C<< endl;
	cout << fixed<<setprecision(2) << C<< endl;//������������λ
	return 0;


}