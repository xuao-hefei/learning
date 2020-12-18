#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	union
	{
		short s;
		char c[sizeof(short)];
	} un;

	un.s = 0x0102;

	if (un.c[0] == 1)
	{
		printf("big_end\n");
	}
	else
	{
		printf("little_end\n");
	}
	return 0;

}
