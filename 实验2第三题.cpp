﻿#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cout << "请输入三角形的三条边长: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double p = a + b + c;
        cout << "三角形的周长是: " << p << endl;
        if (a == b || b == c || a == c) {
            cout << "该三角形是等腰三角形" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形" << endl;
        }
    }
    else {
        cout << "输入的边长不能构成三角形" << endl;
    }
    return 0;
}