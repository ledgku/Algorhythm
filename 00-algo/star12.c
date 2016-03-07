//https://www.acmicpc.net/problem/2522
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, blank, star;
	scanf("%d", &N);
	for(int i = 1; i < 2 * N; i++) {
		blank = abs(N-i);
		star = N - blank;
		for(int j = 0; j < blank; j++)
			printf(" ");
		for(int k = 0; k < star; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}