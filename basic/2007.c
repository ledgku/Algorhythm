//https://www.acmicpc.net/problem/1924
#include <stdio.h>

char date[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int getday(int month);

int main() {
	int month, day, sum = 0;
	scanf("%d %d", &month, &day);
	for(int i = 1; i <= month; i++) {
		if(i == month)
			sum += day;
		else
			sum += getday(i);
	}
	printf("%s\n", date[sum % 7]);
	return 0;
}

int getday(int month) {
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	if(month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	if(month == 2)
		return 28;
}