//https://www.acmicpc.net/problem/1929
#include <stdio.h>

int prime[1000001] = {0, };

int main() {
	int i, j, start, end;
	prime[0] = 1;
	prime[1] = 1;
	for(i=2; i<=1000000; i++) {
		if(!prime[i]) {
			for(j=i+i; j<=1000000; j+=i)
				prime[j] = 1;
		}
	}
	scanf("%d %d", &start, &end);
	for(i=start; i<=end; i++) {
		if(!prime[i])
			printf("%d\n", i);
	}
	return 0;
}