//https://www.acmicpc.net/problem/2446
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, t, star, blank;
	scanf("%d", &N);
	for(int i = 1; i < 2 * N; i++) {
		t = abs(N - i);
		star = 2 * t + 1;
		blank = N - t - 1;
		for(int j = 0; j < blank; j++)
			printf(" ");
		for(int k = 0; k < star; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}