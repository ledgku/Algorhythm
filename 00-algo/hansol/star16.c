//https://www.acmicpc.net/problem/10991
#include <stdio.h>

int main() {
	int N, t;
	scanf("%d", &N);
	for(int i = 1; i <= N; i++) {
		t = N - i;
		for(int j = 0; j < t; j++)
			printf(" ");
		for(int k = 0; k < 2*i-1; k++) {
			if(k%2 == 1)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}