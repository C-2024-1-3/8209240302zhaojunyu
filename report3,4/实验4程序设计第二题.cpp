#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    int len = 0;
    while (hexString[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        int digit;
        if (isdigit(hexString[i])) {
            digit = hexString[i] - '0';
        }
        else if (islower(hexString[i])) {
            digit = hexString[i] - 'a' + 10;
        }
        else {
            digit = hexString[i] - 'A' + 10;
        }
        result += digit * (1 << (4 * (len - i - 1)));
    }
    return result;
}
int main() {
    const char* hexStr = "A5";
    int decimal = parseHex(hexStr);
    cout << "十六进制字符串 " << hexStr << " 转换后的十进制数为: " << decimal << endl;
    return 0;
}