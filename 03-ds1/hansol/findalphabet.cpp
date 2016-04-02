//https://www.acmicpc.net/problem/10809
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	int alphaCnt[26];
	int i, len;
	string str;
	memset(alphaCnt, -1, sizeof(alphaCnt));
	cin >> str;
	for (i = 0; i < str.size(); i++) {
		if (alphaCnt[str[i] - 'a'] == -1)
			alphaCnt[str[i] - 'a'] = i;
	}
	for (i = 0; i < 26; i++)
		cout << alphaCnt[i] << ' ';
	cout << endl;
	return 0;
}