#include <iostream>
using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	double x, y;
	x = 1 / (double)a;
	y = (double)m / (double)b;
	int z1 = (n%m)*a + (n / m)*b;
	if (x < y) {
		if (((n / m) + 1)*b<z1) {
			cout << ((n / m) + 1)*b;
		}else 
		cout << z1;
	}
	else cout << n*a;
	return 0;
}