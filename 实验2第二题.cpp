#include<iostream>
using namespace std;
int main(){
	double x;
	cout << "请输入x的值: ";
	cin >> x;
	if (x < 1 && x>0)
		cout << 3 - 2 * x << endl;
	else if (x >= 1 && x < 5)
		cout << 1.0 / (2 * x) + 1 << endl;
	else if (x >= 5 && x < 10)
		cout << x * x << endl;
	return 0;
}