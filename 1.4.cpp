#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testunint = 65534;
	cout << "output in unsigned int 1 type:"<<oct<< testunint<< endl;//<<oct�˽������
    cout << "output in char type:" <<dec<< static_cast<char>(testunint) << endl;//ע�⽫����ת����ʮ�������
	cout << "output in short type:" << static_cast<short>(testunint) << endl;//Ϊʲô���Ϊ-2?:���ݷ����������65534�Ķ����Ʊ�ʾΪ1111111111111110����short�е�һλ��ʾ���ţ����Ա�ʾΪ���������Ӧ�ĸ�����Ϊ-2
	cout << "output in int type:" << static_cast<int>(testunint) << endl;
	cout << "output in double type:" << static_cast<double>(testunint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testunint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testunint << endl; //16�������
	float b = 3.2;
	cout << static_cast<int>(b) << endl;//ʵ��ת��Ϊint
	system("pause");
	return 0;
}