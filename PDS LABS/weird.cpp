#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	cout << n << " ";
	while (n  !=1)
	{
		if (n%2==1)
			n = (3 * n) + 1;
		else
			n >>= 1;
		cout << n << " ";
	}
	return 0;
}
