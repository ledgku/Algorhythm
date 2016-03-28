#include <cstdio> 
#include <map>
using namespace std;

int main() {
	int N, max = 0;
	long long t, ans = 987654321987654321;
	map<long long, int> cards;
	scanf("%d", &N);
	while(N--) {
		scanf("%lld", &t);
		cards[t] += 1;
	}
	for (auto &c : cards) {
		if (c.second > max || (c.second == max && c.first < ans)) {
			max = c.second;
			ans = c.first;
		}
	}
	printf("%lld\n", ans);
	return 0;
}