#include<iostream>
using namespace std;
int cal(int day) {
	if (day == 10)
		return 1;
	else 
		return (cal(day + 1) + 1) * 2;
}
int main() {
	cout << cal(1) << endl;
	return 0;
}