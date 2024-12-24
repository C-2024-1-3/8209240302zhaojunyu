#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int h, int z) {
		x = h;
		y = z;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "修改后的值为：" << x << " " << y << endl;
	}
};
int main() {
	Point point(60, 80);
	int i, j;
	cout << "输入偏移值：";
	cin >> i >> j;
	point.setPoint(i, j);
	point.display();
	return 0;
}