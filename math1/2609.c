#include <stdio.h>

int getGcm(int a, int b);
int getLcm(int a, int b, int gcm);

int main(int argc, char* argv[])
{
	int a, b;
	int gcm, lcm;

	scanf("%d %d", &a, &b);

	gcm = getGcm(a, b);
	lcm = getLcm(a, b, gcm);

	printf("%d\n%d\n", gcm, lcm);

	return 0;
}

int getGcm(int a, int b)
{
	int c;

	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}

	return a;
}

int getLcm(int a, int b, int gcm)
{
	return gcm * (a/gcm) * (b/gcm);
}
