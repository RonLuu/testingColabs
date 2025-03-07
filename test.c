#include <stdio.h>

int add(int a, int b);

int main()
{
	printf("Hello world");
	printf("%d", add(5, 4));
	exit(0);
}

int add(int a, int b)
{
	return a + b;
}