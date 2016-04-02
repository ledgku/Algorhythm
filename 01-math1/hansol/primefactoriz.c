//https://www.acmicpc.net/problem/11653
#include <stdio.h>

int main() {
	int N, i, cpyN;
	scanf("%d", &N);
	for(i=2; i*i<=N; i++) {
		while(N % i == 0) {
			printf("%d\n", i);
			N /= i;
		}
	}
	if(N > 1)
		printf("%d\n", N);
	return 0;
}