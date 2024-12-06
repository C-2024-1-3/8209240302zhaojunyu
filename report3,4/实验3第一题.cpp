#include <iostream>
using namespace std;
void gcdAndlcm(int m, int n, int& gcd, int& lcm) {
    int a = m;
    int b = n;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (m * n) / gcd;
}
int main() {
    int m, n;
    cout << "请输入自然数m: ";
    cin >> m;
    cout << "请输入自然数n: ";
    cin >> n;
    int gcdresult;
    int lcmresult;
    gcdAndlcm(m, n, gcdresult, lcmresult);
    cout << m << " 和 " << n << " 的最大公约数是: " << gcdresult << endl;
    cout << m << " 和 " << n << " 的最小公倍数是: " << lcmresult << endl;
    return 0;
}
