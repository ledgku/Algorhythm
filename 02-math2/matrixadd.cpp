//https://www.acmicpc.net/problem/2738
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int N, M, i, j;
	scanf("%d %d", &N, &M);
	vector<vector<int> > mat1(N, vector<int>(M, 0));
	vector<vector<int> > mat2(N, vector<int>(M, 0));
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &mat1[i][j]);
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &mat2[i][j]);
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%d ", mat1[i][j] + mat2[i][j]);
		}
		printf("\n");
	}
	return 0;
}