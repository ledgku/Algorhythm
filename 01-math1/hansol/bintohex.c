//https://www.acmicpc.net/problem/1373
#include <stdio.h>
#include <string.h>

char num[1111111];
int ans[333333];

int main() {
	int i, len, t, idx = 0;
	scanf("%s", num);
	len = strlen(num);
	for(i=len-1; i >= 0; i-=3) {
		t = 0;
		if(num[i] == '1')
			t += 1;
		if(i-1 >= 0 && num[i-1] == '1')
			t += 2;
		if(i-2 >= 0 && num[i-2] == '1')
			t += 4;
		ans[idx++] = t;
	}
	for(i=idx-1; i>=0; i--)
		printf("%d", ans[i]);
	printf("\n");
	return 0;
}