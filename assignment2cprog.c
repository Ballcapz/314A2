#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);	

	int a2 = a;

	int x = (a + 95) * ((b * 16) / c) - a2 + 20;

	printf("%d\n", x);

	return 0;

}

