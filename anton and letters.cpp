#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str;
	int cnt = 1;
	getline(cin, str);
	vector<char> distinct;
	if (str[1] == '}') {
		cout << 0;
		return 0;
	}
	else 
	distinct.push_back(str[1]);
	
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != '{' && str[i] != '}' && str[i] != ' ' && str[i] != ',') {
			bool exist = false;
			for (int j = 0; j < cnt; j++) {
				if (str[i] == distinct[j])
				{
					exist = true;
					break;
				}
			}
			if (!exist) {
				distinct.push_back(str[i]);
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}