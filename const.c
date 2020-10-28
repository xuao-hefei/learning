#include <stdio.h>

int main(int argc, char **argv)
{
	const int a = 1;

	*((int*)(&a)) = 2;

	printf("a=%d\n", a);
	return 0;
}
