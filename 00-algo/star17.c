//https://www.acmicpc.net/problem/10992
#include <stdio.h>

int main() {
	int N, t, odd;
	scanf("%d", &N);
	for(int i = 1; i <= N; i++) {
		t = N - i;
		odd = 2 * i - 1;
		for(int j = 0; j < t; j++)
			printf(" ");
		for(int k = 1; k <= odd; k++) {
			if(k == 1 || k == odd || i == N)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}