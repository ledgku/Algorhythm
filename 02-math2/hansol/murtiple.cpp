//https://www.acmicpc.net/problem/1629
#include <cstdio>
using namespace std;

long long calc(long long a, long long b, long long c) {
	if (b == 0)
		return 1;
	else if (b == 1)
		return a % c;
	else if (b % 2 == 0) {
		long long temp = calc(a, b / 2, c);
		return (temp * temp) % c;
	}
	else
		return (a * calc(a, b - 1, c)) % c;
}

int main() {
	long long A, B, C;
	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld\n", calc(A, B, C));
	return 0;
}

//2147483647 2147483647 2147483647