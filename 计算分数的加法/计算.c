#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	float  i,sum,sum1,f;
	sum = 0.0;
	sum1 = 0.0;
	for (i = 1.0; i < 99; i=i+2) 
	{
		sum+= 1.0/ i;
	}
	for (i = 2.0; i < 100; i=i+2) 
	{
		sum1 += 1.0/ i;
	}
	f = sum - sum1;
	printf("最终得数是%lf\n", f);
	return 0;
}