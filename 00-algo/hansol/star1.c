//https://www.acmicpc.net/problem/2438
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}