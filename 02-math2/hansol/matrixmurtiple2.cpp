//https://www.acmicpc.net/problem/10830
#include <cstdio>
#include <vector>
using namespace std;

vector< vector<int> > mur(vector< vector<int> > a, vector< vector<int> > b) {
	int i, j, k;
	int n = a.size();
	vector< vector<int> > res(n, vector<int>(n, 0));
	for(i = 0; i < a; i++) {
		for(j = 0; j < a; j++) {
			for(k = 0; k < a; k++) {
				res[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return res;
}

int main() {
	int N, B, i, j;
	scanf("%d %d", &N, &B);
	vector< vector<int> > a(N, vector<int>(N, 0));
	vector< vector<int> > ans(N, vector<int>(N, 0));
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			scanf("%d", &a[i][j]);
		}
		ans[i][i] = 0; // if(b == 0) E
	}
	while(b > 0) {
		if(b % 2 == 1)
			ans = mur(ans, a);
	}
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}