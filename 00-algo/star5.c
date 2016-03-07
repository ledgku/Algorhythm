//https://www.acmicpc.net/problem/2442
#include <stdio.h>

int main() {
	int N, range;
	scanf("%d", &N);
	for(int i=1; i<=N; i++) {
		range = i - 1;
		for(int j=1; j<=(2*N)-1; j++) {
			if(j >= N-range && j <= N+range)
				printf("*");
			else if(j < N-range)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}