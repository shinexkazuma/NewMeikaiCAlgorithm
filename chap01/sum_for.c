//１，２，・・・，nの和を求める（for文）

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; //和

	puts("１からnまでの和を求めます。");

	printf("nの値：");
	scanf("%d", &n);

	sum = 0;

	for (i = 1; i <= n; i++) //i=1,2,...,n
	{
		sum += i; //sumにiを加える
	}

	printf("１から%dまでの和は%dです。\n", n, sum);

	return 0;
}