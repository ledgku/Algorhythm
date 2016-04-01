#include <stdio.h>

int getGcm(int a, int b);

int main(int argc, char* argv[])
{
	int i, test_case, num1, num2;
	int gcm;

	scanf("%d", &test_case);

	for (i=0; i<test_case; ++i)
	{
		scanf("%d %d", &num1, &num2);

		gcm = getGcm(num1, num2);	

		printf("%d\n", gcm * (num1/gcm) * (num2/gcm));
	}

	return 0;
}

int getGcm(int a, int b)
{
	int tmp;

	while (b!=0)
	{
		tmp = a % b;
		a = b;
		b = tmp;		
	}

	return a;
}
