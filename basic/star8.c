//https://www.acmicpc.net/problem/2445
#include <stdio.h>

int main() {
	int N, range;
	scanf("%d", &N);
	for(int i=1; i<=N; i++) {
		range = i - 1;
		for(int j=1; j<=2*N; j++) {
			if(j <= i || j >= 2*N - range)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for(int i=N-1; i>=1; i--) {
		range = i - 1;
		for(int j=1; j<=2*N; j++) {
			if(j <= i || j >= 2*N - range)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}