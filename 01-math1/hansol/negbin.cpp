//https://www.acmicpc.net/problem/2089
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num, val, len;
	scanf("%d", &num);
	val = num;
	vector<int> ans;
	if (num == 0 || num == 1)
		printf("%d\n", num);
	else {
		while (!(val == 0 || val == 1)) {
			ans.push_back(abs(val) % 2);
			if (val > 0)
				val = val / 2 * (-1);
			else {
				val = (abs(val) / 2);
				if (ans.back())
					val += 1;
			}
		}
		if (val == 1)
			ans.push_back(1);
		len = ans.size();
		while (len--)
			printf("%d", ans[len]);
		printf("\n");
	}
	return 0;
}