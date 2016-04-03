#include <stdio.h>

int gcd(int a, int b);

int main(int argc, char* argv[])
{
	int test_case, count;
	int i, j, t;
	int iArr[100];
	unsigned int sum;

	scanf("%d", &test_case);

	for (t=0; t<test_case; ++t)
	{
		sum = 0;
		scanf("%d", &count);

		for (i=0; i<count; ++i)
		{
			scanf("%d", &iArr[i]);
		}
		
		for (i=0; i<count; ++i)
		{
			for (j=i+1; j<count; ++j)
			{
				sum += gcd(iArr[i], iArr[j]);				
			}	
		}

		printf("%u\n", sum);
	}


	
	return 0;
}

int gcd(int a, int b)
{
	int c;

	while (b!=0)
	{
		c = a%b;
		a = b;
		b = c;
	}

	return a;
}
