//1000以下の素数を列挙(第1版)

#include <stdio.h>

int main(void)
{
	int i, n;
	unsigned long counter = 0; //除算の回数

	for (n = 2; n <= 1000; n++)
	{
		for (i = 2; i < n; i++)
		{
			counter++;
			if (n % i == 0) //割り切れると素数ではない
			{
				break; //それ以外の繰り返しは不要
			}
		}
		if (n == i) //最後まで割り切れなかった
		{
			printf("%d\n", n);
		}
	}

	printf("除算を行った回数：%lu\n", counter);

	return 0;
}