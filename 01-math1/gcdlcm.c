//https://www.acmicpc.net/problem/2609
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
	int A, B, g;
	scanf("%d %d", &A, &B);
	g = gcd(A, B);
	printf("%d\n", g);
	printf("%d\n", g * (A/g) * (B/g));
	return 0;
}