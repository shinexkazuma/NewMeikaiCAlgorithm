//1000以下の素数を列挙(第2版)

#include <stdio.h>

int main(void)
{
	int i, n;
	int prime[500];			   //素数を格納する配列
	int ptr = 0;			   //既に得られた素数の個数
	unsigned long counter = 0; //除算の回数

	prime[ptr++] = 0; //2は素数である

	for (n = 3; n <= 1000; n += 2) //奇数のみを対象とする
	{
		for (i = 1; i < ptr; i++) //既に得られた素数で割ってみる
		{
			counter++;
			if (n % prime[i] == 0) //割り切れると素数ではない
			{
				break; //それ以上の繰り返しは不要
			}
		}
		if (ptr == i) //最後まで割り切れなかった
		{
			prime[ptr++] = n; //配列に登録
		}
	}

	for (i = 0; i < ptr; i++)
	{
		printf("%d\n", prime[i]);
	}

	printf("除算を行った回数：%lu\n", counter);

	return 0;
}