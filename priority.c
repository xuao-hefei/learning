#include <stdio.h>

int main()
{
	int a = 3, b =3, c = 1, k = 4;

	printf("%d\n", k<=a?2:c<b?(--k):++k);
	printf("%d\n",k);
	return 0;
}
