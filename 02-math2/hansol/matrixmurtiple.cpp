//https://www.acmicpc.net/problem/2740
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int N, M, K, i, j, k;
	scanf("%d %d", &N, &M);
	vector< vector<int> > mat1(N, vector<int>(M, 0));
	for(i = 0; i < N; i++) {
		for(j = 0; j < M; j++) {
			scanf("%d", &mat1[i][j]);
		}
	}
	scanf("%d %d", &M, &K);
	vector< vector<int> > mat2(M, vector<int>(K, 0));
	for(i = 0; i < M; i++) {
		for(j = 0; j < K; j++) {
			scanf("%d", &mat2[i][j]);
		}
	}
	int t;
	for(i = 0; i < N; i++) {
		for(j = 0; j < K; j++) {
			t = 0;
			for(k = 0; k < M; k++) {
				t += mat1[i][k] * mat2[k][j];
			}
			printf("%d ", t);
		}
		printf("\n");
	}
	return 0;
}