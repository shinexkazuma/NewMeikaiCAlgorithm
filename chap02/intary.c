//vf^ͺint^ΕvfͺTΜzρ

#include <stdio.h>

#define N 5 //zρΜvf

int main()
{
	int i;
	int a[N]; //zρΜιΎ

	for (i = 0; i < N; i++) //evfΙlπΗέή
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	puts("evfΜl");
	for (i = 0; i < N; i++) //evfΜlπ\¦
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}