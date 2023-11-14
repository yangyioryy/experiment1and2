#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	double r, h;
	cin >> r >> h;
	double V;
	V = ( PI *r* r* h)/3;
	cout << V << endl;
	return 0;
}