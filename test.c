#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = MAX(num1, num2);
		printf("max=%d\n", max);
		return 0;
}
