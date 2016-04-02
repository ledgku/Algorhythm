//https://www.acmicpc.net/problem/10872
#include <stdio.h>

int main() {
	int N, i, ans = 1;
	scanf("%d", &N);
	for(i=1; i<=N; i++)
		ans *= i;
	printf("%d\n", ans);
	return 0;
}