#include <stdio.h>

int main(int argc, char **argv)
{
	int *p = NULL;

	p = (int*)12345;

	printf("p = %d\n", p);

	return 0;
}
