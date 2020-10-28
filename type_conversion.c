#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
	int int_a = 0;
	char int_b = 0;
	float float_c = 0;

	int_a = 1;
	int_b = int_a;

	float_c = int_b;

	float_c = 3.14;

	int_a = float_c;

	return 0;
}
