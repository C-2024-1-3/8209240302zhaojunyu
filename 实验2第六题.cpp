#include<iostream>
using namespace std;
int max(int x, int y)
{
	int z;
	return(z = ((x >= y) ? x : y));
}
int min(int x, int y)
{
	int z;
	return(z = ((x >= y) ? y : x));
}
int main()
{
	int m, n, i, j;
	cin >> m >> n;
	for (j = min(m, n); j >= 1; j--)
	{
		if (m % j == 0 && n % j == 0)
			break;
	}
	cout << j << "\t";
	for (i = max(m, n); i <= m * n; i++)
	{
		if (i % m == 0 && i % n == 0)
			break;
	}
	cout << i;
}