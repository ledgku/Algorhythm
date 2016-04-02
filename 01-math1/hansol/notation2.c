//https://www.acmicpc.net/problem/11005
#include <stdio.h>

char remain[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ans[33];

int main() {
	int N, B, quo, rem, idx = 0;
	scanf("%d %d", &N, &B);
	do {
		quo = N / B;
		rem = N % B;
		ans[idx++] = remain[rem];
		N = quo;
	} while(quo >= B);
	if(quo != 0)
		ans[idx++] = remain[quo];
	for(int i=idx; i>0; i--)
		printf("%c", ans[i-1]);
	printf("\n");
	return 0;
}