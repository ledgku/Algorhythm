//https://www.acmicpc.net/problem/9613
#include <stdio.h>

int gcd(int x, int y) {
	int r;
	while(y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int main() {
	int i, itr, j, k, n, ans;
	int num[111];
	scanf("%d", &itr);
	for(i = 0; i < itr; i++) {
		ans = 0;
		scanf("%d", &n);
		for(j = 0; j < n; j++) {
			scanf("%d", &num[j]);
		}
		for(j = 0; j < n-1; j++) {
			for(k = j+1; k < n; k++) {
				ans += gcd(num[j], num[k]);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}