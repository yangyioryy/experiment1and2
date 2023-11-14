#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "输入华氏摄氏度：" ;
	cin >> a;
    b = int(((a - 32) / 1.8)*100+0.5)/100.0;//四舍五入保留两位
	cout << "转化为摄氏温度为：" << b << endl;
	cout << fixed<<setprecision(2) << b<< endl;//保留两位
	return 0;


}