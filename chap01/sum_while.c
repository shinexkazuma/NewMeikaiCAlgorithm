//１，２，・・・，nの和を求める（while文）

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; //和

	puts("１からnまでの和を求めます。");

	printf("nの値：");
	scanf("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n) //iがn以下であれば繰り返す
	{
		sum += i; //sumにiを加える
		i++;	  //iの値をインクリメント
	}

	printf("１から%dまでの和は%dです。\n", n, sum);

	return 0;
}