#include <iostream>

using namespace std;

int main() {
	long long x;
	cin >> x;
	if (x >= 0)
	{
		cout << x;
	}
	else {
		long long a, b;
		a = x/10;
		b = x / 100 * 10 + x % 10;
		if (a > b)
			cout << a;
		else cout << b;
	}
	return 0;
}