#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	if (k <= ceil((long double)n / 2) ) {
		cout << k * 2 - 1;
	}
	else {
		if (n % 2 == 0)
		{
			cout<< ( k - n / 2) * 2;
		}
		else cout << (k - (n / 2) - 1) * 2;
	}
}