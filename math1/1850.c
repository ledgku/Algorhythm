#include <stdio.h>

unsigned long long getGcm(unsigned long long a,  unsigned long long b);

int main(int argc, char* argv[])
{
	unsigned long long num1, num2;
	unsigned long long gcm;
	
	scanf("%lld %lld", &num1, &num2);

	gcm = getGcm(num1, num2);

	printf("%lld\n", gcm);

	return 0;
}

unsigned long long getGcm(unsigned long long a, unsigned long long b)
{
	unsigned long long c;

	while (b!=0)
	{
		c = a%b;
		a = b;
		b = c;
	}

	return a;
}
