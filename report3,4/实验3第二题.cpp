#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num){
	if (num == 2 || num == 3)
		return true;
	else{
		for (int i = 2; i <= sqrt(num); i++){
			if (num % i == 0){
				return false;
				break;
			}
		}
		return true;
	}
}
int main() {
	int ans = 0;
	for (int j = 2; ans < 200; j++) {
		if (is_prime(j)) {
			cout << j << "\t";
			ans++;
			if (ans % 10 == 0)
				cout << endl;
		}
	}
}