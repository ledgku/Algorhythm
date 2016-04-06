//https://www.acmicpc.net/problem/11726
#include <cstdio>
using namespace std;
int cache[1001];
int main() {
	int n, i;
	scanf("%d", &n);
	cache[0] = 1;
	cache[1] = 1;
	for (i = 2; i <= n; i++) {
		cache[i] = cache[i - 1] + cache[i - 2];
		cache[i] %= 10007;
	}
	printf("%d\n", cache[n]);
	return 0;
}