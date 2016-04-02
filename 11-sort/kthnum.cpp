//https://www.acmicpc.net/problem/11004
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, K, i, t;
	scanf("%d %d", &N, &K);
	vector <int> data(N);
	for (i = 0; i < N; i++) {
		scanf("%d", &t);
		data[i] = t;
	}
	nth_element(data.begin(), data.begin() + K - 1, data.end());
	printf("%d\n", data[K-1]);
	return 0;
}