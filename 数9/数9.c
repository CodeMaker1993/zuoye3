#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	int a, b, i,sum;
	i = 0;
	sum = 0;
begin:i++;
	if (i % 10 == 9) {
		sum++;
	}
	else if (i + 11 > 100) 
	{ sum++; }

	if (i < 100)
	{
		goto begin;
	}

	printf("1-100¹²ÓÐ%d¸ö9", sum);
	return 0;
}