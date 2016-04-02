//https://www.acmicpc.net/problem/2004
#include <stdio.h>

int main() {
	long long int n, m, t, f, mt, n_mt, mf, n_mf;
	scanf("%lld %lld", &n, &m);
	for(int i=2; i<=n; i*=2) {
		t += i/2;
		if(i/2<=m && i>=m)
			mt = t;
		if(i/2<=n-m && i>= n-m)
			n_mt = t;
	}
	for(int i=5; i<=n; i*=5) {
		f += i/5;
		if(i/5<=m && i>=m)
			mf = f;
		if(i/5<=n-m && i>= n-m)
			n_mf = f;
	}
	t -= (mt + n_mt);
	f -= (mf + n_mf);
	printf("%d\n", t > f ? f : t);
	return 0;
}