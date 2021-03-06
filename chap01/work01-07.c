//sum_for.cのプログラムをもとにして
//たとえばnが7であれば、『１から７までの和は２８です。』と表示するのではなく
//『１＋２＋３＋４＋５＋６＋７＝２８』と表示するプログラムを作成せよ。

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
		if (i == n)
		{
			printf("%d = %d", i, sum);
		}
		else
		{
			printf("%d + ", i);
		}
	}

	return 0;
}