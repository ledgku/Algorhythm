//https://www.acmicpc.net/problem/6588
#include <stdio.h>

int prime[1000001] = {0, };

int main() {
	int n, a, b, i, j;
	prime[0] = 1;
	prime[1] = 1;
	for(i=2; i<=1000000; i++) {
		if(!prime[i]) {
			for(j=i+i; j<=1000000; j+=i)
				prime[j] = 1;
		}
	}
	while(1) {
		scanf("%d", &n);
		if(n == 0)
			break;
		for(i = 2; i<=1000000; i++) {
			if(!prime[i]) {
				if(!prime[n-i]) {
					a = i;
					b = n-i;
					break;
				}
			}
		}
		printf("%d = %d + %d\n", n, a, b);
	}
	return 0;
}