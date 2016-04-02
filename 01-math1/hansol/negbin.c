//https://www.acmicpc.net/problem/2089
#include <stdio.h>

long long int num;

int main() {
	scanf("%lld", &num);
	printf("%d\n", num%(-2));
	printf("%d\n", num/(-2));
	return 0;
}