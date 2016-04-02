//https://www.acmicpc.net/problem/2745
#include <stdio.h>
#include <string.h>

int main() {
	char N[33];
	int B, len, i, rem, ans = 0;
	int t = 1;
	scanf("%s %d", &N, &B);
	len = strlen(N);
	for(i = len; i > 0; i--) {
		if(N[i-1] >= 'A')
			rem = N[i-1] - 55;
		else
			rem = N[i-1] - '0';
		ans += (t * rem);
		t *= B;
	}
	printf("%d\n", ans);
	return 0;
}