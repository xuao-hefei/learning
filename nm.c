#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int i = 0;
	int k = 0;

	if (argc != 3)
	{
		return -1;
	}
	
	int N = atoi(argv[1]);
	int M = atoi(argv[2]);

	int *buf1 = malloc(N*sizeof(int));
	int *buf2 = malloc(M*sizeof(int));

	if (buf1 == NULL || buf2 == NULL)
	{
		return -1;
	}

	for (i = 0; i < N; i++)
	{
		buf1[i] = i+1;
	}

	int point1 = 0;
	int point2 = 0;

	while (k < M)
	{
		do
		{
			buf2[k] = buf1[point2%N];
			k++;
			if (k >= M)
				break;
		}
		while(point1 != (++point2)%N);
		point1 = (point1 + 1)%N;
		point2 = point1;
	}
	printf("buf[%d]=\n", M);
	printf("{");
	for (i = 0; i < M; i++)
	{
		printf("%u, ", buf2[i]);
	}
	printf("}\n");
	

}
