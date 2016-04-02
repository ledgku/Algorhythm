//https://www.acmicpc.net/problem/1463
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 987654321
vector<int> cache(1000001, -1);

int solve(int n) {
	if (n == 1)
		return 0;
	if (n < 0)
		return INF;
	if (cache[n] != -1)
		return cache[n];
	int &ret = cache[n];
	ret = INF;
	ret = min(ret, 1 + solve(n - 1));
	if (n % 2 == 0)
		ret = min(ret, 1 + solve(n / 2));
	if (n % 3 == 0)
		ret = min(ret, 1 + solve(n / 3));
	return ret;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", solve(n));
	return 0;
}