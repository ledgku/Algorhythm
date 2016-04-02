//https://www.acmicpc.net/problem/1212
#include <stdio.h>
#include <string.h>

char num[333333];
char ans[1111111];
char hexarr[8][4] = {"000", "001", "010", "011", "100", "101", "110", "111"};

int main() {
	int cur, len, i, j, idx = 0;
	scanf("%s", &num);
	len = strlen(num);
	for(i=0; i<len; i++) {
		cur = num[i] - '0';
		if(i == 0 && cur < 4) {
			if(cur == 0) {
				ans[idx++] = '0';
			} else if(cur == 1) {
				ans[idx++] = '1';
			} else if(cur == 2) {
				ans[idx++] = '1';
				ans[idx++] = '0';
			} else if(cur == 3) {
				ans[idx++] = '1';
				ans[idx++] = '1'; 
			}
		} else {
			for(j=0; j<3; j++) {
				ans[idx++] = hexarr[cur][j];
			}
		}
	}
	ans[idx] = '\0';
	printf("%s\n", ans);
	return 0;
}