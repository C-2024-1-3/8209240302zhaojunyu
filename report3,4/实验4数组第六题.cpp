#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }
    int index;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (isalpha(s[i])) {
            char lowerCaseChar = tolower(s[i]);
            index = lowerCaseChar - 'a';
            counts[index]++;
        }
    }
}
int main() {
    char s[100];
    int counts[26];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    count(s, counts);
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            char letter = 'a' + i; 
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }
    return 0;
}