#include <iostream>
using namespace std;
int main() {
    int totalApples = 0;  
    double totalCost = 0.0;
    int day = 1; 
    const double priceperApple = 0.8;  
    int applesToday = 2;
    while (totalApples + applesToday <= 100) {
        totalApples += applesToday;  
        totalCost += applesToday * priceperApple;  
        applesToday *= 2;
        day++; 
    }
    double averageCost = totalCost / (day - 1);
    cout << "平均每天花费: " << averageCost << " 元" << endl;
    return 0;
}
