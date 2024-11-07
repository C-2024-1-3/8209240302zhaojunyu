#include <iostream>
using namespace std;
int main() {
    char c;
    int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;
    cout << "请输入一行字符: ";
    while (true) {
        c = cin.get(); 
        if (c == '\n') {  
            break;
        }
        if (isalpha(c)) { 
            letterCount++;
        }
        else if (isspace(c)) { 
            spaceCount++;
        }
        else if (isdigit(c)) { 
            digitCount++;
        }
        else { 
            otherCount++;
        }
    }
    cout << "英文字母的个数: " << letterCount << endl;
    cout << "空格的个数: " << spaceCount << endl;
    cout << "数字字符的个数: " << digitCount << endl;
    cout << "其它字符的个数: " << otherCount << endl;
    return 0;
}

