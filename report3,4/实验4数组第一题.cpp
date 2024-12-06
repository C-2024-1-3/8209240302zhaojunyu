#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;  
    double numbers[SIZE];  
    double distinct[SIZE];  
    int distinctCount = 0; 
    cout << "Enter ten numbers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
        bool isNew = true;  
        for (int j = 0; j < distinctCount; ++j) {
            if (numbers[i] == distinct[j]) {
                isNew = false;  
                break;
            }
        }
        if (isNew) {
            distinct[distinctCount] = numbers[i];
            distinctCount++;
        }
    }
    cout << "The distinct numbers are: ";
    for (int i = 0; i < distinctCount; ++i) {
        cout << distinct[i] << " ";
    }
    cout << endl;
    return 0;
}