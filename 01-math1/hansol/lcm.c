//https://www.acmicpc.net/problem/1934
#include <stdio.h>

int gcd(int x, int y) {
	int r;
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int main() {
	int A, B, g, itr, i;
	scanf("%d", &itr);
	for(i = 0; i < itr; i++) {
		scanf("%d %d", &A, &B);
		g = gcd(A, B);
		printf("%d\n", g * (A/g) * (B/g));
	}
	return 0;
}