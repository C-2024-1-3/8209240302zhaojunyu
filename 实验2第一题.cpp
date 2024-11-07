#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "请输入一个字符: ";
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << "转换后的大写字母是: " << char(c - 'a' + 'A') << endl;
    }
    else {
        cout << "字符的ASCII码值是: " << int(c + 1) << endl;
    }
    return 0;
}