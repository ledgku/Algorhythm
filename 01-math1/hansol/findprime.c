//https://www.acmicpc.net/problem/1978
#include <stdio.h>

int prime[1111] = {0, };
int is_prime(int x) {
	if(x < 2)
		return 0;
	for(int i=2; i*i<=x; i++) {
		if(x % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int i, N, t, ans = 0;
	for(i=2; i<=1000; i++) {
		prime[i] = is_prime(i);
	}
	scanf("%d", &N);
	for(i=0; i<N; i++) {
		scanf("%d", &t);
		if(prime[t] == 1)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}