#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int i = 0, j = 0;
    while (s2[i] != '\0') {
        if (s1[j] == '\0') {
            return i - j;
        }
        if (s1[j] == s2[i]) {
            i++;
            j++;
        }
        else {
            i = i - j + 1;
            j = 0;
        }
    }
    if (s1[j] == '\0') {
        return i - j;
    }
    return -1;
}
int main() {
    const int MAX_LENGTH = 100;
    char s1[MAX_LENGTH];
    char s2[MAX_LENGTH];
    cout << "Enter the first string: ";
    cin.getline(s1, MAX_LENGTH);
    cout << "Enter the second string: ";
    cin.getline(s2, MAX_LENGTH);
    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;
    }
    else {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;
    }
    return 0;
}