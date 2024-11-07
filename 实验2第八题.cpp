#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    double a, xn, xn_next;
    cout << "请输入一个正数 a：";
    cin >> a;
    if (a <= 0) {
        cout << "请输入一个正数！" << endl;
        exit(0);
    }//如果输入一个负数，程序不会运行，直到输入正数为止。
    xn = a;
    do {
        xn_next = 0.5 * (xn + a / xn); 
        if (fabs(xn_next - xn) < 1e-5) {  
            break;
        }
        //如果这里小于1e-10是可以的，但再小就会受到double精度的限制
        xn = xn_next;  
    } while (true);
    cout << "平方根为: " << xn_next << endl;
    return 0;
}

