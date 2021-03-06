//九九の掛け算ではなく足し算を行う表を表示するプログラムを作成せよ。
//前問と同様に、票の上と左に足す数を表示すること。

#include <stdio.h>

int main(void)
{
	int i, j;

	printf("　 |");

	for (i = 1; i <= 9; i++)
	{
		printf("　%d", i);
	}

	putchar('\n');
	printf("---+---------------------------\n");

	for (i = 1; i <= 9; i++)
	{
		printf(" %d |", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%3d", i + j);
		}
		putchar('\n');
	}

	return 0;
}