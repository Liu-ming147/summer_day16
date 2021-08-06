#include<stdio.h>

int pow(int x, int y)
{
	int i, sum;
	sum = 1;
	for (i = 1; i <= y; ++i)
	{
		sum *= x;
	}
	return sum;
}

int main()
{
	int x, y;
	printf("ÇëÊäÈëxºÍy£º");
	scanf("%d %d", &x, &y);
	int p = pow(x, y);
	printf("%d\n", p);

	return 0;
}