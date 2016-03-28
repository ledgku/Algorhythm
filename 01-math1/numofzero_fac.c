//https://www.acmicpc.net/problem/1676
#include <stdio.h>

int main() {
	int N, i, cpyi, five;
	scanf("%d", &N);
	five = 0;
	for(i=2; i<=N; i++) {
		cpyi = i;
		while(cpyi % 5 == 0) {
			five++;
			cpyi /= 5;
		}
	}
	printf("%d\n", five);
	return 0;
}