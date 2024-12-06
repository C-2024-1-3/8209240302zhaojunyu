#include<iostream>
using namespace std;
int n;
void bub(int a[], int n) {
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
	cout << "Enter the number: ";
	cin >> n;
	int* p = new int[n];
	cout << "Enter the elements: ";
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	bub(p, n);
	cout << "Aftersorted: ";
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}
	delete[]p;
}