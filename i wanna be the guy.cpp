#include <iostream>

using namespace std;


int main()
{
	int n, x, y;
	cin >> n;
	bool* lvl;
	lvl = new bool[n];
	for (int i = 0; i < n; i++)
		lvl[i] = false;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		int tmp;
		cin >> tmp;
		lvl[tmp-1] = true;
	}
	cin >> y;
	for (int i = 1; i <= y; i++) {
		int tmp;
		cin >> tmp;
		lvl[tmp-1] = true;
		
	}
	bool win = true;
	for (int i = 0; i < n; i++) {
		if (lvl[i] == false)
			win = false;
	}
	if (win)
		cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	return 0;
}