#include "stdio.h"

void main()
{
	char buffer[15] = {0};
	double d = 0;
	char *c = NULL;
	char tmp[15] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9c, 0x3f};
	int i = 0;

	c = (char*)(&d);


	for (i = 0; i < 8; i++)
	{
		c[i] = tmp[i];
	}
	printf("sizeof double = %d\n", sizeof(double));
	printf("d=%lf\n", d);
	printf("%hhx, %hhx, %hhx, %hhx, %hhx, %hhx, %hhx, %hhx\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7]);
	sprintf(buffer, "%1.15lf", d);
	printf("%hhx, %hhx, %hhx, %hhx, %hhx, %hhx, %hhx, %hhx\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4], buffer[5], buffer[6], buffer[7]);
	printf("%s\n", buffer);
	return;
}
