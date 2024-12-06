#include<iostream>
#include<algorithm>
using namespace std;
double sto[10];
void bub(double a[], int n) {
	bool sorted = false;
	while (!sorted) {
		sorted = true;
		for (int i = 1; i < n; i++) {
			if (a[i - 1] > a[i]) {
				swap(a[i - 1], a[i]);
				sorted = false;
			}
		}
		n--;
	}
}
int main() {
	cout << "Enter the elements: ";
	for (int i = 0; i < 10; i++) {
		cin >> sto[i];
	}
	bub(sto, 10);
	cout << "After bubblesorted: ";
	for (int i = 0; i < 10; i++) {
		cout << sto[i] <<" ";
	}
	cout << endl;
}
