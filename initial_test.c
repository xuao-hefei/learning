#include <stdio.h>
#include <stdlib.h>

class abc
{
	private:
			int e;
	public:
		abc();
};

abc::abc()
{
	e = 5;
}


abc f;

int init_c()
{
	return 3;
}

int init_d()
{
	return 4;
}

//int c = 0;
int c = init_c();
int d = init_d();
int init_f(int a, int b)
{
		        return a+b;
}

int main(int argc, char** argv)
{
 c = init_c();
 printf("c=%d\n",c);
 int b = 1;
 int a =2;

 int f =init_f(a,b);

}
