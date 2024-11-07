#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char c;
    cout << "请输入一个算式: ";
    cin >> num1 >> c >> num2;
    switch (c) {
    case '+':
        cout << "结果: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "结果: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "结果: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误: 除数不能为 0！" << endl;
        }
        else {
            cout << "结果: " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "错误: 除数不能为 0！" << endl;
        }
        else if (static_cast<int>(num1) != num1 || static_cast<int>(num2) != num2) {
            cout << "错误: 求余运算要求两个操作数为整数！" << endl;
        }
        else {
            cout << "结果: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
        break;
    default:
        cout << "错误: 非法的运算符！" << endl;
    }
    return 0;
}
