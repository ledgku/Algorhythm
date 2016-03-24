//https://www.acmicpc.net/problem/1850
#include <stdio.h>

long long int gcd(long long int x, long long int y) {
	long long int r;
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int main() {
	long long int A, B, g;
	scanf("%lld %lld", &A, &B);
	g = gcd(A, B);
	for(int i = 0; i < g; i++) {
		printf("1");
	}
	printf("\n");
	return 0;
}