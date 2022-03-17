#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[4] = {1,2,3,4};
	int i;
	int b[4] = {5,6,7,8};
	printf("数组a=");
	for (i = 0; i < 4; i++)
	{
		int s;
		s = a[i];
		a[i] = b[i];
		b[i] = s;
	}
	for (i = 0; i < 4; i++) {
		printf("%d", a[i]);
	}
	printf("\n数组b=");
	for (i = 0; i < 4; i++) {
		printf("%d", b[i]);
	}

	return 0;
}